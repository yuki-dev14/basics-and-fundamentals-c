// Euclid G. Yabut
// IT2B
#include <iostream>
using namespace std;
int main() {
const int MaxSize = 10;
int arr1[MaxSize], arr2[MaxSize], merged[MaxSize * 2];
int size1, size2;
//arr 1
cout << "Enter the number of elements for the first array (up to 10): ";
cin >> size1;
cout << "Enter " << size1 << " elements for the first array:\n";
for (int i = 0; i < size1; ++i) {
cout << "Element: first arr "<< i+1 << "/" << size1 << ": ";
cin >> arr1[i];
}
//arr 2
cout << "Enter the number of elements for the second array (up to 10): ";
cin >> size2;
cout << "Enter " << size2 << " elements for the second array:\n";
for (int i = 0; i < size2; ++i) {
cout<< "Element: second arr " << i+1 << "/" <<size2 << ": ";
cin >> arr2[i];
}
//merging arr1 and arr2
int mergedSize = size1 + size2;
for (int i = 0; i < size1; ++i) {
merged[i] = arr1[i];
}
for (int i = 0; i < size2; ++i) {
merged[size1 + i] = arr2[i];
}
//Bubble Sort of the merged arr, in descending order
for (int i = 0; i < mergedSize - 1; ++i) {
for (int j = 0; j < mergedSize - i - 1; ++j) {
if (merged[j] < merged[j + 1]) {
int temp = merged[j];
merged[j] = merged[j + 1];
merged[j + 1] = temp;
}
}
}
//print merge arr
cout << "\nMerged array in descending order:\n";
for (int i = 0; i < mergedSize; ++i) {
cout << merged[i] << " ";
}
cout << endl;
return 0;
}

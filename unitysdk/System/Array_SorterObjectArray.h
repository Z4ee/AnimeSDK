#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections { class IComparer; }

#define SYSTEM_ARRAY_SORTEROBJECTARRAY_DOWNHEAP_OFFSET UNITYSDK_OFFSET(0x99A8D0)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_HEAPSORT_OFFSET UNITYSDK_OFFSET(0x99A840)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_INSERTIONSORT_OFFSET UNITYSDK_OFFSET(0x99A8E0)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_INTROSORT_OFFSET UNITYSDK_OFFSET(0x99A820)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_INTROSPECTIVESORT_OFFSET UNITYSDK_OFFSET(0x99A810)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_PICKPIVOTANDPARTITION_OFFSET UNITYSDK_OFFSET(0x99A830)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_SORT_OFFSET UNITYSDK_OFFSET(0x99A810)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_SWAPIFGREATERWITHITEMS_OFFSET UNITYSDK_OFFSET(0x99A7F0)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_SWAP_OFFSET UNITYSDK_OFFSET(0x99A800)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x99A770)

namespace System
{
	inline static constexpr unsigned int Array_SorterObjectArray_TypeDefinitionIndex = 130;

	struct alignas(8) Array_SorterObjectArray
	{
		::Il2CppArray<::System::Object*>* keys; // 0x10
		::Il2CppArray<::System::Object*>* items; // 0x18
		::System::Collections::IComparer* comparer; // 0x20

		::System::Void _ctor(::Il2CppArray<::System::Object*>* keys, ::Il2CppArray<::System::Object*>* items, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY__CTOR_OFFSET))(this, keys, items, comparer);
		}

		::System::Void SwapIfGreaterWithItems(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_SWAPIFGREATERWITHITEMS_OFFSET))(this, a, b);
		}

		::System::Void Swap(::System::Int32 i, ::System::Int32 j)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_SWAP_OFFSET))(this, i, j);
		}

		::System::Void Sort(::System::Int32 left, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_SORT_OFFSET))(this, left, length);
		}

		::System::Void IntrospectiveSort(::System::Int32 left, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_INTROSPECTIVESORT_OFFSET))(this, left, length);
		}

		::System::Void IntroSort(::System::Int32 lo, ::System::Int32 hi, ::System::Int32 depthLimit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_INTROSORT_OFFSET))(this, lo, hi, depthLimit);
		}

		::System::Int32 PickPivotAndPartition(::System::Int32 lo, ::System::Int32 hi)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_PICKPIVOTANDPARTITION_OFFSET))(this, lo, hi);
		}

		::System::Void Heapsort(::System::Int32 lo, ::System::Int32 hi)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_HEAPSORT_OFFSET))(this, lo, hi);
		}

		::System::Void DownHeap(::System::Int32 i, ::System::Int32 n, ::System::Int32 lo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_DOWNHEAP_OFFSET))(this, i, n, lo);
		}

		::System::Void InsertionSort(::System::Int32 lo, ::System::Int32 hi)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_INSERTIONSORT_OFFSET))(this, lo, hi);
		}
	};
}

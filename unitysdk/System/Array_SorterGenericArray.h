#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Array; }
namespace System::Collections { class IComparer; }

#define SYSTEM_ARRAY_SORTERGENERICARRAY_DOWNHEAP_OFFSET UNITYSDK_OFFSET(0x20CBCB0)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_HEAPSORT_OFFSET UNITYSDK_OFFSET(0x20CBC20)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_INSERTIONSORT_OFFSET UNITYSDK_OFFSET(0x20CBCC0)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_INTROSORT_OFFSET UNITYSDK_OFFSET(0x20CBC00)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_INTROSPECTIVESORT_OFFSET UNITYSDK_OFFSET(0x20CBBF0)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_PICKPIVOTANDPARTITION_OFFSET UNITYSDK_OFFSET(0x20CBC10)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_SORT_OFFSET UNITYSDK_OFFSET(0x20CBBF0)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_SWAPIFGREATERWITHITEMS_OFFSET UNITYSDK_OFFSET(0x20CBBD0)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_SWAP_OFFSET UNITYSDK_OFFSET(0x20CBBE0)
#define SYSTEM_ARRAY_SORTERGENERICARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x20CBB80)

namespace System
{
	inline static constexpr unsigned int Array_SorterGenericArray_TypeDefinitionIndex = 141;

	struct alignas(8) Array_SorterGenericArray
	{
		::System::Array* keys; // 0x10
		::System::Array* items; // 0x18
		::System::Collections::IComparer* comparer; // 0x20

		::System::Void _ctor(::System::Array* keys, ::System::Array* items, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Array*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY__CTOR_OFFSET))(this, keys, items, comparer);
		}

		::System::Void SwapIfGreaterWithItems(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_SWAPIFGREATERWITHITEMS_OFFSET))(this, a, b);
		}

		::System::Void Swap(::System::Int32 i, ::System::Int32 j)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_SWAP_OFFSET))(this, i, j);
		}

		::System::Void Sort(::System::Int32 left, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_SORT_OFFSET))(this, left, length);
		}

		::System::Void IntrospectiveSort(::System::Int32 left, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_INTROSPECTIVESORT_OFFSET))(this, left, length);
		}

		::System::Void IntroSort(::System::Int32 lo, ::System::Int32 hi, ::System::Int32 depthLimit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_INTROSORT_OFFSET))(this, lo, hi, depthLimit);
		}

		::System::Int32 PickPivotAndPartition(::System::Int32 lo, ::System::Int32 hi)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_PICKPIVOTANDPARTITION_OFFSET))(this, lo, hi);
		}

		::System::Void Heapsort(::System::Int32 lo, ::System::Int32 hi)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_HEAPSORT_OFFSET))(this, lo, hi);
		}

		::System::Void DownHeap(::System::Int32 i, ::System::Int32 n, ::System::Int32 lo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_DOWNHEAP_OFFSET))(this, i, n, lo);
		}

		::System::Void InsertionSort(::System::Int32 lo, ::System::Int32 hi)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_INSERTIONSORT_OFFSET))(this, lo, hi);
		}
	};
}

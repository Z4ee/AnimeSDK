#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Array; }
namespace System::Collections { class IComparer; }

#define SYSTEM_ARRAY_SORTERGENERICARRAY_DOWNHEAP_OFFSET UNITYSDK_OFFSET(0x3B60180)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_HEAPSORT_OFFSET UNITYSDK_OFFSET(0x3B600F0)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_INSERTIONSORT_OFFSET UNITYSDK_OFFSET(0x3B60190)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_INTROSORT_OFFSET UNITYSDK_OFFSET(0x3B600D0)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_INTROSPECTIVESORT_OFFSET UNITYSDK_OFFSET(0x3B600C0)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_PICKPIVOTANDPARTITION_OFFSET UNITYSDK_OFFSET(0x3B600E0)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_SORT_OFFSET UNITYSDK_OFFSET(0x3B600C0)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_SWAPIFGREATERWITHITEMS_OFFSET UNITYSDK_OFFSET(0x3B600A0)
#define SYSTEM_ARRAY_SORTERGENERICARRAY_SWAP_OFFSET UNITYSDK_OFFSET(0x3B600B0)
#define SYSTEM_ARRAY_SORTERGENERICARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x3B60050)

namespace System
{
	inline static constexpr unsigned int Array_SorterGenericArray_TypeDefinitionIndex = 140;

	struct alignas(8) Array_SorterGenericArray
	{
		::System::Array* keys; // 0x10
		::System::Array* items; // 0x18
		::System::Collections::IComparer* comparer; // 0x20

		::System::Void _ctor(::System::Array* a1, ::System::Array* a2, ::System::Collections::IComparer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Array*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SwapIfGreaterWithItems(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_SWAPIFGREATERWITHITEMS_OFFSET))(this, a1, a2);
		}

		::System::Void Swap(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_SWAP_OFFSET))(this, a1, a2);
		}

		::System::Void Sort(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_SORT_OFFSET))(this, a1, a2);
		}

		::System::Void IntrospectiveSort(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_INTROSPECTIVESORT_OFFSET))(this, a1, a2);
		}

		::System::Void IntroSort(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_INTROSORT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 PickPivotAndPartition(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_PICKPIVOTANDPARTITION_OFFSET))(this, a1, a2);
		}

		::System::Void Heapsort(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_HEAPSORT_OFFSET))(this, a1, a2);
		}

		::System::Void DownHeap(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_DOWNHEAP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InsertionSort(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTERGENERICARRAY_INSERTIONSORT_OFFSET))(this, a1, a2);
		}
	};
}

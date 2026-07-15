#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections { class IComparer; }

#define SYSTEM_ARRAY_SORTEROBJECTARRAY_DOWNHEAP_OFFSET UNITYSDK_OFFSET(0x3A09DD0)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_HEAPSORT_OFFSET UNITYSDK_OFFSET(0x3A09D40)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_INSERTIONSORT_OFFSET UNITYSDK_OFFSET(0x3A09DE0)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_INTROSORT_OFFSET UNITYSDK_OFFSET(0x3A09D20)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_INTROSPECTIVESORT_OFFSET UNITYSDK_OFFSET(0x3A09D10)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_PICKPIVOTANDPARTITION_OFFSET UNITYSDK_OFFSET(0x3A09D30)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_SORT_OFFSET UNITYSDK_OFFSET(0x3A09D10)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_SWAPIFGREATERWITHITEMS_OFFSET UNITYSDK_OFFSET(0x3A09CF0)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY_SWAP_OFFSET UNITYSDK_OFFSET(0x3A09D00)
#define SYSTEM_ARRAY_SORTEROBJECTARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x3A09B80)

namespace System
{
	inline static constexpr unsigned int Array_SorterObjectArray_TypeDefinitionIndex = 139;

	struct alignas(8) Array_SorterObjectArray
	{
		::Il2CppArray<::System::Object*>* keys; // 0x10
		::Il2CppArray<::System::Object*>* items; // 0x18
		::System::Collections::IComparer* comparer; // 0x20

		::System::Void _ctor(::Il2CppArray<::System::Object*>* a1, ::Il2CppArray<::System::Object*>* a2, ::System::Collections::IComparer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SwapIfGreaterWithItems(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_SWAPIFGREATERWITHITEMS_OFFSET))(this, a1, a2);
		}

		::System::Void Swap(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_SWAP_OFFSET))(this, a1, a2);
		}

		::System::Void Sort(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_SORT_OFFSET))(this, a1, a2);
		}

		::System::Void IntrospectiveSort(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_INTROSPECTIVESORT_OFFSET))(this, a1, a2);
		}

		::System::Void IntroSort(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_INTROSORT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 PickPivotAndPartition(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_PICKPIVOTANDPARTITION_OFFSET))(this, a1, a2);
		}

		::System::Void Heapsort(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_HEAPSORT_OFFSET))(this, a1, a2);
		}

		::System::Void DownHeap(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_DOWNHEAP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InsertionSort(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTEROBJECTARRAY_INSERTIONSORT_OFFSET))(this, a1, a2);
		}
	};
}

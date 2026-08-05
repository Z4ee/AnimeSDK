#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IRenderElement; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_RENDERSUBLAYERBUCKET_ADDAPPENDONLY_OFFSET UNITYSDK_OFFSET(0x1FB99ED0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_ADD_OFFSET UNITYSDK_OFFSET(0x1FB99E10)
#define FOUNDATION_RENDERSUBLAYERBUCKET_APPENDASSIGN_OFFSET UNITYSDK_OFFSET(0x1FB9A2B0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_APPLYORDERS_OFFSET UNITYSDK_OFFSET(0x1FB9A6B0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_APPLYSHAREDORDER_OFFSET UNITYSDK_OFFSET(0x1FB9A900)
#define FOUNDATION_RENDERSUBLAYERBUCKET_CANAPPENDONE_OFFSET UNITYSDK_OFFSET(0x1FB9A230)
#define FOUNDATION_RENDERSUBLAYERBUCKET_COMPACTCURRENTELEMENTS_OFFSET UNITYSDK_OFFSET(0x1FB9A470)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1FB99D30)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1FB99CB0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_DIRTYORDER_OFFSET UNITYSDK_OFFSET(0x1FB99CF0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_DIRTYSORT_OFFSET UNITYSDK_OFFSET(0x1FB99CD0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_ELEMENTLIST_OFFSET UNITYSDK_OFFSET(0x1FB99CA0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_NEXTORDER_OFFSET UNITYSDK_OFFSET(0x1FB99D50)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_STARTORDER_OFFSET UNITYSDK_OFFSET(0x1FB99D10)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_SUBLAYER_OFFSET UNITYSDK_OFFSET(0x1FB99C80)
#define FOUNDATION_RENDERSUBLAYERBUCKET_MARKORDERDIRTY_OFFSET UNITYSDK_OFFSET(0x1FB9A1F0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_REMOVEAPPENDONLY_OFFSET UNITYSDK_OFFSET(0x1FB9A010)
#define FOUNDATION_RENDERSUBLAYERBUCKET_REMOVE_OFFSET UNITYSDK_OFFSET(0x1FB99F70)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SETRANGE_OFFSET UNITYSDK_OFFSET(0x1FB9A160)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1FB99D40)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SET_DIRTYORDER_OFFSET UNITYSDK_OFFSET(0x1FB99D00)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SET_DIRTYSORT_OFFSET UNITYSDK_OFFSET(0x1FB99CE0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SET_NEXTORDER_OFFSET UNITYSDK_OFFSET(0x1FB99D60)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SET_STARTORDER_OFFSET UNITYSDK_OFFSET(0x1FB99D20)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SET_SUBLAYER_OFFSET UNITYSDK_OFFSET(0x1FB99C90)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SORTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1FB9A0B0)
#define FOUNDATION_RENDERSUBLAYERBUCKET__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB99D70)

namespace Foundation
{
	inline static constexpr unsigned int RenderSubLayerBucket_TypeDefinitionIndex = 93354;

	class RenderSubLayerBucket : public ::System::Object
	{
	public:
		::System::Collections::Generic::IComparer_1<::Foundation::IRenderElement*>* _comparer; // 0x10
		::System::Collections::Generic::List_1<::Foundation::IRenderElement*>* _elementList; // 0x18
		::System::Int32 _NextOrder_k__BackingField; // 0x20
		::System::Int32 _Capacity_k__BackingField; // 0x24
		::System::Boolean _DirtySort_k__BackingField; // 0x28
		::System::Boolean _DirtyOrder_k__BackingField; // 0x29
		::System::Int32 _StartOrder_k__BackingField; // 0x2C
		::System::Int32 _SubLayer_k__BackingField; // 0x30

		::System::Void _ctor(::System::Int32 subLayer, ::System::Collections::Generic::IComparer_1<::Foundation::IRenderElement*>* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IComparer_1<::Foundation::IRenderElement*>*))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET__CTOR_OFFSET))(this, subLayer, comparer);
		}

		::System::Int32 get_SubLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_GET_SUBLAYER_OFFSET))(this);
		}

		::System::Void set_SubLayer(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_SET_SUBLAYER_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Foundation::IRenderElement*>* get_ElementList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Foundation::IRenderElement*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_GET_ELEMENTLIST_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_DirtySort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_GET_DIRTYSORT_OFFSET))(this);
		}

		::System::Void set_DirtySort(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_SET_DIRTYSORT_OFFSET))(this, value);
		}

		::System::Boolean get_DirtyOrder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_GET_DIRTYORDER_OFFSET))(this);
		}

		::System::Void set_DirtyOrder(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_SET_DIRTYORDER_OFFSET))(this, value);
		}

		::System::Int32 get_StartOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_GET_STARTORDER_OFFSET))(this);
		}

		::System::Void set_StartOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_SET_STARTORDER_OFFSET))(this, value);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_Capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_SET_CAPACITY_OFFSET))(this, value);
		}

		::System::Int32 get_NextOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_GET_NEXTORDER_OFFSET))(this);
		}

		::System::Void set_NextOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_SET_NEXTORDER_OFFSET))(this, value);
		}

		::System::Void Add(::Foundation::IRenderElement* elem)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IRenderElement*))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_ADD_OFFSET))(this, elem);
		}

		::System::Void AddAppendOnly(::Foundation::IRenderElement* elem)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IRenderElement*))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_ADDAPPENDONLY_OFFSET))(this, elem);
		}

		::System::Boolean Remove(::Foundation::IRenderElement* elem)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::IRenderElement*))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_REMOVE_OFFSET))(this, elem);
		}

		::System::Boolean RemoveAppendOnly(::Foundation::IRenderElement* elem)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::IRenderElement*))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_REMOVEAPPENDONLY_OFFSET))(this, elem);
		}

		::System::Void SortIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_SORTIFNEEDED_OFFSET))(this);
		}

		::System::Void SetRange(::System::Int32 startOrder, ::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_SETRANGE_OFFSET))(this, startOrder, capacity);
		}

		::System::Void MarkOrderDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_MARKORDERDIRTY_OFFSET))(this);
		}

		::System::Boolean CanAppendOne(::System::Int32 maxOrder)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_CANAPPENDONE_OFFSET))(this, maxOrder);
		}

		::System::Void AppendAssign(::Foundation::IRenderElement* elem, ::System::Int32 maxOrder)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IRenderElement*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_APPENDASSIGN_OFFSET))(this, elem, maxOrder);
		}

		::System::Void CompactCurrentElements(::System::Int32 maxOrder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_COMPACTCURRENTELEMENTS_OFFSET))(this, maxOrder);
		}

		::System::Void ApplyOrders(::System::Int32 maxOrder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_APPLYORDERS_OFFSET))(this, maxOrder);
		}

		::System::Void ApplySharedOrder(::System::Int32 order)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERSUBLAYERBUCKET_APPLYSHAREDORDER_OFFSET))(this, order);
		}
	};
}

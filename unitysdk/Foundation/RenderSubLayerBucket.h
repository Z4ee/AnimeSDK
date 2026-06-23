#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IRenderElement; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_RENDERSUBLAYERBUCKET_ADDAPPENDONLY_OFFSET UNITYSDK_OFFSET(0x1E171FE0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_ADD_OFFSET UNITYSDK_OFFSET(0x1E171F20)
#define FOUNDATION_RENDERSUBLAYERBUCKET_APPENDASSIGN_OFFSET UNITYSDK_OFFSET(0x1E1723C0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_APPLYORDERS_OFFSET UNITYSDK_OFFSET(0x1E1727D0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_APPLYSHAREDORDER_OFFSET UNITYSDK_OFFSET(0x1E172A20)
#define FOUNDATION_RENDERSUBLAYERBUCKET_CANAPPENDONE_OFFSET UNITYSDK_OFFSET(0x1E172340)
#define FOUNDATION_RENDERSUBLAYERBUCKET_COMPACTCURRENTELEMENTS_OFFSET UNITYSDK_OFFSET(0x1E172580)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1E171E40)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E171DC0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_DIRTYORDER_OFFSET UNITYSDK_OFFSET(0x1E171E00)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_DIRTYSORT_OFFSET UNITYSDK_OFFSET(0x1E171DE0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_ELEMENTLIST_OFFSET UNITYSDK_OFFSET(0x1E171DB0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_NEXTORDER_OFFSET UNITYSDK_OFFSET(0x1E171E60)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_STARTORDER_OFFSET UNITYSDK_OFFSET(0x1E171E20)
#define FOUNDATION_RENDERSUBLAYERBUCKET_GET_SUBLAYER_OFFSET UNITYSDK_OFFSET(0x1E171D90)
#define FOUNDATION_RENDERSUBLAYERBUCKET_MARKORDERDIRTY_OFFSET UNITYSDK_OFFSET(0x1E172300)
#define FOUNDATION_RENDERSUBLAYERBUCKET_REMOVEAPPENDONLY_OFFSET UNITYSDK_OFFSET(0x1E172120)
#define FOUNDATION_RENDERSUBLAYERBUCKET_REMOVE_OFFSET UNITYSDK_OFFSET(0x1E172080)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SETRANGE_OFFSET UNITYSDK_OFFSET(0x1E172270)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1E171E50)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SET_DIRTYORDER_OFFSET UNITYSDK_OFFSET(0x1E171E10)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SET_DIRTYSORT_OFFSET UNITYSDK_OFFSET(0x1E171DF0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SET_NEXTORDER_OFFSET UNITYSDK_OFFSET(0x1E171E70)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SET_STARTORDER_OFFSET UNITYSDK_OFFSET(0x1E171E30)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SET_SUBLAYER_OFFSET UNITYSDK_OFFSET(0x1E171DA0)
#define FOUNDATION_RENDERSUBLAYERBUCKET_SORTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1E1721C0)
#define FOUNDATION_RENDERSUBLAYERBUCKET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E171E80)

namespace Foundation
{
	inline static constexpr unsigned int RenderSubLayerBucket_TypeDefinitionIndex = 89334;

	class RenderSubLayerBucket : public ::System::Object
	{
	public:
		::System::Collections::Generic::IComparer_1<::Foundation::IRenderElement*>* _comparer; // 0x10
		::System::Collections::Generic::List_1<::Foundation::IRenderElement*>* _elementList; // 0x18
		::System::Int32 _Capacity_k__BackingField; // 0x20
		::System::Int32 _StartOrder_k__BackingField; // 0x24
		::System::Boolean _DirtySort_k__BackingField; // 0x28
		::System::Boolean _DirtyOrder_k__BackingField; // 0x29
		::System::Int32 _SubLayer_k__BackingField; // 0x2C
		::System::Int32 _NextOrder_k__BackingField; // 0x30

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

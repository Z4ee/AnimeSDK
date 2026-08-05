#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginDynamicAllocateItem_LazyRecycleContext.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginLazyRecycle___c__DisplayClass6_0.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollBounds.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewDummyItem; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_ALLDUMMYMOVETOSTARTBY1_OFFSET UNITYSDK_OFFSET(0x1412F670)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_ALLOCATEDUMMY_1_OFFSET UNITYSDK_OFFSET(0x1412C0B0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_ALLOCATEDUMMY_OFFSET UNITYSDK_OFFSET(0x1412CA90)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_CREATEINITDUMMY_OFFSET UNITYSDK_OFFSET(0x1412BF40)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_GETDATAINDEXBYITEMGO_OFFSET UNITYSDK_OFFSET(0x1412F430)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_GETDUMMYTRANSBYDATAINDEX_OFFSET UNITYSDK_OFFSET(0x1412F530)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_GET__DUMMYPOOL_OFFSET UNITYSDK_OFFSET(0x1412BE80)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_GET__USINGDUMMYDIC_OFFSET UNITYSDK_OFFSET(0x1412C200)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_ONCLEARALLITEMDATAS_OFFSET UNITYSDK_OFFSET(0x1412B970)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1412BB90)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_RECYCLEALLDUMMY_OFFSET UNITYSDK_OFFSET(0x1412B9C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_RECYCLEDUMMY_OFFSET UNITYSDK_OFFSET(0x1412F200)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_RECYCLETOOMUCHDUMMY_OFFSET UNITYSDK_OFFSET(0x1412A7C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_REPLACEDUMMYTOREALGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1412A2B0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_REPLACEDUMMY_OFFSET UNITYSDK_OFFSET(0x1412F280)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_TRYFINDFIRSTMATCHCANRECYCLESCROLLVIEWITEM_OFFSET UNITYSDK_OFFSET(0x1412C2E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_TRYFINDLASTMATCHCANRECYCLESCROLLVIEWITEM_OFFSET UNITYSDK_OFFSET(0x1412CBC0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_TRYRECYCLEDUMMY_OFFSET UNITYSDK_OFFSET(0x1412F100)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_TRYRECYCLESCROLLITEMFROMEND_OFFSET UNITYSDK_OFFSET(0x1412B010)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_TRYRECYCLESCROLLITEMFROMSTART_OFFSET UNITYSDK_OFFSET(0x1412AC70)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1412B960)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE__RECYCLEDUMMY_OFFSET UNITYSDK_OFFSET(0x1412F010)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE__RECYCLETOOMUCHDUMMY_G__TRYRECYCLEFROMEND_7_1_OFFSET UNITYSDK_OFFSET(0x1412E1C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE__RECYCLETOOMUCHDUMMY_G__TRYRECYCLEFROMSTART_7_0_OFFSET UNITYSDK_OFFSET(0x1412E8A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE__REPLACEDUMMYTOREALGAMEOBJECT_G__REPLACEALL_6_0_OFFSET UNITYSDK_OFFSET(0x1412D3E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE___BASE_ONCLEARALLITEMDATAS_OFFSET UNITYSDK_OFFSET(0x1412F840)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1412F8D0)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginLazyRecycle_TypeDefinitionIndex = 75033;

class MonoUITableScrollV2_TableScrollPluginLazyRecycle : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ScrollViewDummyItem*>* __usingDummyDic; // 0x18
	::System::Collections::Generic::Stack_1<::MoleMole::ScrollViewDummyItem*>* __dummyPool; // 0x20

	::System::Void _ctor(::MonoUITableScrollV2* tableScroll)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE__CTOR_OFFSET))(this, tableScroll);
	}

	::System::Void OnClearAllItemDatas()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_ONCLEARALLITEMDATAS_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateInitDummy(::System::Int32 dataIndex, ::UnityEngine::Vector2 itemSize)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_CREATEINITDUMMY_OFFSET))(this, dataIndex, itemSize);
	}

	::System::Boolean TryRecycleScrollItemFromStart(::System::Int32 newItemDataIndex, ::MoleMole::ScrollViewItemWidgetController*& recycleScrollItem)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ScrollViewItemWidgetController*&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_TRYRECYCLESCROLLITEMFROMSTART_OFFSET))(this, newItemDataIndex, recycleScrollItem);
	}

	::System::Boolean TryRecycleScrollItemFromEnd(::System::Int32 newItemDataIndex, ::MoleMole::ScrollViewItemWidgetController*& recycleScrollItem)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ScrollViewItemWidgetController*&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_TRYRECYCLESCROLLITEMFROMEND_OFFSET))(this, newItemDataIndex, recycleScrollItem);
	}

	::System::Void ReplaceDummyToRealGameObject(::MonoUITableScrollV2_TableScrollPluginDynamicAllocateItem_LazyRecycleContext& context)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginDynamicAllocateItem_LazyRecycleContext&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_REPLACEDUMMYTOREALGAMEOBJECT_OFFSET))(this, context);
	}

	::System::Void RecycleTooMuchDummy(::MonoUITableScrollV2_TableScrollPluginDynamicAllocateItem_LazyRecycleContext& context)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginDynamicAllocateItem_LazyRecycleContext&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_RECYCLETOOMUCHDUMMY_OFFSET))(this, context);
	}

	::System::Void RecycleAllDummy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_RECYCLEALLDUMMY_OFFSET))(this);
	}

	::System::Boolean TryRecycleDummy(::System::Int32 dataIndex)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_TRYRECYCLEDUMMY_OFFSET))(this, dataIndex);
	}

	::System::Void RecycleDummy(::MoleMole::ScrollViewDummyItem* dummy)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewDummyItem*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_RECYCLEDUMMY_OFFSET))(this, dummy);
	}

	::System::Void ReplaceDummy(::System::Int32 oldDataIndex, ::System::Int32 newDataIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_REPLACEDUMMY_OFFSET))(this, oldDataIndex, newDataIndex);
	}

	::System::Int32 GetDataIndexByItemGO(::UnityEngine::GameObject* go)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_GETDATAINDEXBYITEMGO_OFFSET))(this, go);
	}

	::UnityEngine::RectTransform* GetDummyTransByDataIndex(::System::Int32 dataIndex)
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_GETDUMMYTRANSBYDATAINDEX_OFFSET))(this, dataIndex);
	}

	::System::Void AllDummyMoveToStartBy1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_ALLDUMMYMOVETOSTARTBY1_OFFSET))(this);
	}

	::MoleMole::ScrollViewDummyItem* AllocateDummy(::System::Int32 siblingIndex, ::UnityEngine::Bounds size)
	{
		return ((::MoleMole::ScrollViewDummyItem*(*)(::PVOID, ::System::Int32, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_ALLOCATEDUMMY_OFFSET))(this, siblingIndex, size);
	}

	::MoleMole::ScrollViewDummyItem* AllocateDummy_1()
	{
		return ((::MoleMole::ScrollViewDummyItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_ALLOCATEDUMMY_1_OFFSET))(this);
	}

	::System::Void _RecycleDummy(::MoleMole::ScrollViewDummyItem* dummy)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewDummyItem*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE__RECYCLEDUMMY_OFFSET))(this, dummy);
	}

	::System::Boolean TryFindFirstMatchCanRecycleScrollViewItem(::System::Int32 newItemDataIndex, ::MoleMole::ScrollViewItemWidgetController*& canRecycleScrollItem, ::NAPScrollView::DataStruct::ScrollBounds& childBounds)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ScrollViewItemWidgetController*&, ::NAPScrollView::DataStruct::ScrollBounds&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_TRYFINDFIRSTMATCHCANRECYCLESCROLLVIEWITEM_OFFSET))(this, newItemDataIndex, canRecycleScrollItem, childBounds);
	}

	::System::Boolean TryFindLastMatchCanRecycleScrollViewItem(::System::Int32 newItemDataIndex, ::MoleMole::ScrollViewItemWidgetController*& canRecycleScrollItem, ::NAPScrollView::DataStruct::ScrollBounds& childBounds)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ScrollViewItemWidgetController*&, ::NAPScrollView::DataStruct::ScrollBounds&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_TRYFINDLASTMATCHCANRECYCLESCROLLVIEWITEM_OFFSET))(this, newItemDataIndex, canRecycleScrollItem, childBounds);
	}

	::System::Collections::Generic::Stack_1<::MoleMole::ScrollViewDummyItem*>* get__dummyPool()
	{
		return ((::System::Collections::Generic::Stack_1<::MoleMole::ScrollViewDummyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_GET__DUMMYPOOL_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ScrollViewDummyItem*>* get__usingDummyDic()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ScrollViewDummyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE_GET__USINGDUMMYDIC_OFFSET))(this);
	}

	::System::Void _ReplaceDummyToRealGameObject_g__ReplaceAll_6_0(::MonoUITableScrollV2_TableScrollPluginDynamicAllocateItem_LazyRecycleContext& _context, ::MonoUITableScrollV2_TableScrollPluginLazyRecycle___c__DisplayClass6_0& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginDynamicAllocateItem_LazyRecycleContext&, ::MonoUITableScrollV2_TableScrollPluginLazyRecycle___c__DisplayClass6_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE__REPLACEDUMMYTOREALGAMEOBJECT_G__REPLACEALL_6_0_OFFSET))(this, _context, a2);
	}

	::System::Boolean _RecycleTooMuchDummy_g__TryRecycleFromStart_7_0(::MonoUITableScrollV2_TableScrollPluginDynamicAllocateItem_LazyRecycleContext& _context)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginDynamicAllocateItem_LazyRecycleContext&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE__RECYCLETOOMUCHDUMMY_G__TRYRECYCLEFROMSTART_7_0_OFFSET))(this, _context);
	}

	::System::Boolean _RecycleTooMuchDummy_g__TryRecycleFromEnd_7_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE__RECYCLETOOMUCHDUMMY_G__TRYRECYCLEFROMEND_7_1_OFFSET))(this);
	}

	::System::Void __base_OnClearAllItemDatas()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE___BASE_ONCLEARALLITEMDATAS_OFFSET))(this);
	}

	::System::Void __base_OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAZYRECYCLE___BASE_ONDESTROY_OFFSET))(this);
	}
};

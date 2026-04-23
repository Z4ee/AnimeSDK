#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/ListItemArrangeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AnimatorButton; }
namespace SuperScrollView { class GridViewLayoutParam; }
namespace SuperScrollView { class ItemIndexData; }
namespace SuperScrollView { class LoopStaggeredGridViewItem; }
namespace SuperScrollView { class StaggeredGridItemGroup; }
namespace SuperScrollView { class StaggeredGridItemPool; }
namespace SuperScrollView { class StaggeredGridItemPrefabConfData; }
namespace SuperScrollView { class StaggeredGridViewInitParam; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTANCHOR_OFFSET UNITYSDK_OFFSET(0xB98DB30)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTCOLUMNORROW_OFFSET UNITYSDK_OFFSET(0xB98E350)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTCONTAINERANCHOR_OFFSET UNITYSDK_OFFSET(0xB990F10)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTCONTAINERPIVOT_OFFSET UNITYSDK_OFFSET(0xB98DC80)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTPIVOT_OFFSET UNITYSDK_OFFSET(0xB98DA50)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CACHEDRAGPOINTEREVENTDATA_OFFSET UNITYSDK_OFFSET(0xB9910F0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CHECKALLGROUPIFNEEDUPDATEITEMPOS_OFFSET UNITYSDK_OFFSET(0xB98FEF0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CLEARALLTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0xB98F0E0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CLEARALL_OFFSET UNITYSDK_OFFSET(0xB992550)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xB992820)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETCONTENTSIZE_OFFSET UNITYSDK_OFFSET(0xB990060)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETCURSHOULDADDNEWITEMGROUPINDEX_OFFSET UNITYSDK_OFFSET(0xB991D10)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMABSPOSBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0xB990320)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMBYGROUPANDGROUPINDEX_OFFSET UNITYSDK_OFFSET(0xB992140)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMGROUPBYINDEX_OFFSET UNITYSDK_OFFSET(0xB98D1F0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMINDEXDATA_OFFSET UNITYSDK_OFFSET(0xB990760)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMPREFABCONFDATA_OFFSET UNITYSDK_OFFSET(0xB98D290)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETNEWITEMBYGROUPANDINDEX_OFFSET UNITYSDK_OFFSET(0xB991540)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0xB9906E0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ARRANGETYPE_OFFSET UNITYSDK_OFFSET(0xB98D140)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_CONTAINERTRANS_OFFSET UNITYSDK_OFFSET(0xB98D1A0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_CURMAXCREATEDITEMINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xB991420)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ISDRAGING_OFFSET UNITYSDK_OFFSET(0xB98D1C0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ISINITED_OFFSET UNITYSDK_OFFSET(0xB98D1E0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ISVERTLIST_OFFSET UNITYSDK_OFFSET(0xB98D180)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ITEMPREFABDATALIST_OFFSET UNITYSDK_OFFSET(0xB98D160)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ITEMTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xB98D190)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_LAYOUTPARAM_OFFSET UNITYSDK_OFFSET(0xB98D1D0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_LISTUPDATECHECKFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xB98D170)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_SCROLLRECT_OFFSET UNITYSDK_OFFSET(0xB98D1B0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_VIEWPORTHEIGHT_OFFSET UNITYSDK_OFFSET(0xB98F220)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_VIEWPORTSIZE_OFFSET UNITYSDK_OFFSET(0xB98FFC0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_VIEWPORTWIDTH_OFFSET UNITYSDK_OFFSET(0xB98F1B0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_INITITEMPOOL_OFFSET UNITYSDK_OFFSET(0xB98DD60)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_INITLISTVIEW_OFFSET UNITYSDK_OFFSET(0xB98D430)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ISCONTAINERTRANSCANMOVE_OFFSET UNITYSDK_OFFSET(0xB9922C0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_MOVEPANELTOITEMINDEX_OFFSET UNITYSDK_OFFSET(0xB98F980)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_NEWLISTVIEWITEM_1_OFFSET UNITYSDK_OFFSET(0xB98F540)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_NEWLISTVIEWITEM_OFFSET UNITYSDK_OFFSET(0xB98F290)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONANIMATORBUTTONSELECTED_OFFSET UNITYSDK_OFFSET(0xB992200)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xB991060)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB9927D0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONDRAG_OFFSET UNITYSDK_OFFSET(0xB9913A0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xB991310)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONITEMNEW_OFFSET UNITYSDK_OFFSET(0xB991820)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xB990CA0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONITEMSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xB9908D0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xB9920D0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RECYCLEALLITEM_OFFSET UNITYSDK_OFFSET(0xB98F010)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RECYCLEITEMTMP_OFFSET UNITYSDK_OFFSET(0xB990AC0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_REFRESHALLSHOWNITEM_OFFSET UNITYSDK_OFFSET(0xB990800)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_REFRESHITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0xB990950)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RESETGRIDVIEWLAYOUTPARAM_OFFSET UNITYSDK_OFFSET(0xB98EB80)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RESETLISTVIEW_OFFSET UNITYSDK_OFFSET(0xB9909D0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SETANCHOREDPOSITIONX_OFFSET UNITYSDK_OFFSET(0xB990210)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SETANCHOREDPOSITIONY_OFFSET UNITYSDK_OFFSET(0xB990100)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SETLISTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xB98EE70)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SET_ARRANGETYPE_OFFSET UNITYSDK_OFFSET(0xB98D150)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SPAWNED_OFFSET UNITYSDK_OFFSET(0xB992870)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATEALLGROUPSHOWNITEMSPOS_OFFSET UNITYSDK_OFFSET(0xB991470)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATECONTENTSIZE_OFFSET UNITYSDK_OFFSET(0xB98E970)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATELAYOUTPARAMAUTOVALUE_OFFSET UNITYSDK_OFFSET(0xB98E6F0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATELISTVIEWWITHDEFAULT_OFFSET UNITYSDK_OFFSET(0xB991F10)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATELISTVIEW_OFFSET UNITYSDK_OFFSET(0xB990460)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xB991F90)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xB9928B0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopStaggeredGridView_TypeDefinitionIndex = 44419;

	class LoopStaggeredGridView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::SuperScrollView::StaggeredGridItemPool*>* mItemPoolDict; // 0x18
		::System::Collections::Generic::List_1<::SuperScrollView::StaggeredGridItemPool*>* mItemPoolList; // 0x20
		::System::Collections::Generic::List_1<::SuperScrollView::StaggeredGridItemPrefabConfData*>* mItemPrefabDataList; // 0x28
		::SuperScrollView::ListItemArrangeType mArrangeType; // 0x30
		::UnityEngine::RectTransform* mContainerTrans; // 0x38
		::UnityEngine::UI::ScrollRect* mScrollRect; // 0x40
		::System::Int32 mGroupCount; // 0x48
		::System::Collections::Generic::List_1<::SuperScrollView::StaggeredGridItemGroup*>* mItemGroupList; // 0x50
		::System::Collections::Generic::List_1<::SuperScrollView::ItemIndexData*>* mItemIndexDataList; // 0x58
		::UnityEngine::RectTransform* mScrollRectTransform; // 0x60
		::UnityEngine::RectTransform* mViewPortRectTransform; // 0x68
		::System::Single mItemDefaultWithPaddingSize; // 0x70
		::System::Int32 mItemTotalCount; // 0x74
		::System::Boolean mIsVertList; // 0x78
		::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>* mOnGetItemByItemIndex; // 0x80
		::XLua::LuaTable* mLuaTable; // 0x88
		::System::Int32 mColumnOrRowCount; // 0x90
		::System::Boolean mIsFlexible; // 0x94
		::System::Single mItemWidthOrHeight; // 0x98
		::System::Single mPaddingTopOrLeft; // 0x9C
		::System::Single mPaddingBottomOrRight; // 0xA0
		::System::Single mItemWidthOrHeightPadding; // 0xA4
		::System::Boolean mSortIndexByInput; // 0xA8
		::Il2CppArray<::UnityEngine::Vector3>* mItemWorldCorners; // 0xB0
		::Il2CppArray<::UnityEngine::Vector3>* mViewPortRectLocalCorners; // 0xB8
		::System::Single mDistanceForRecycle0; // 0xC0
		::System::Single mDistanceForNew0; // 0xC4
		::System::Single mDistanceForRecycle1; // 0xC8
		::System::Single mDistanceForNew1; // 0xCC
		::System::Boolean mIsDraging; // 0xD0
		::UnityEngine::EventSystems::PointerEventData* mPointerEventData; // 0xD8
		::System::Action* mOnBeginDragAction; // 0xE0
		::System::Action* mOnDragingAction; // 0xE8
		::System::Action* mOnEndDragAction; // 0xF0
		::UnityEngine::Vector3 mLastFrameContainerPos; // 0xF8
		::System::Boolean mListViewInited; // 0x104
		::System::Int32 mListUpdateCheckFrameCount; // 0x108
		::SuperScrollView::GridViewLayoutParam* mLayoutParam; // 0x110
		::System::Single mMaxPrefabHeightOrWidth; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW__CTOR_OFFSET))(this);
		}

		::SuperScrollView::ListItemArrangeType get_ArrangeType()
		{
			return ((::SuperScrollView::ListItemArrangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ARRANGETYPE_OFFSET))(this);
		}

		::System::Void set_ArrangeType(::SuperScrollView::ListItemArrangeType value)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::ListItemArrangeType))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SET_ARRANGETYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::SuperScrollView::StaggeredGridItemPrefabConfData*>* get_ItemPrefabDataList()
		{
			return ((::System::Collections::Generic::List_1<::SuperScrollView::StaggeredGridItemPrefabConfData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ITEMPREFABDATALIST_OFFSET))(this);
		}

		::System::Int32 get_ListUpdateCheckFrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_LISTUPDATECHECKFRAMECOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsVertList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ISVERTLIST_OFFSET))(this);
		}

		::System::Int32 get_ItemTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ITEMTOTALCOUNT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ContainerTrans()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_CONTAINERTRANS_OFFSET))(this);
		}

		::UnityEngine::UI::ScrollRect* get_ScrollRect()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_SCROLLRECT_OFFSET))(this);
		}

		::System::Boolean get_IsDraging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ISDRAGING_OFFSET))(this);
		}

		::SuperScrollView::GridViewLayoutParam* get_LayoutParam()
		{
			return ((::SuperScrollView::GridViewLayoutParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_LAYOUTPARAM_OFFSET))(this);
		}

		::System::Boolean get_IsInited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ISINITED_OFFSET))(this);
		}

		::SuperScrollView::StaggeredGridItemGroup* GetItemGroupByIndex(::System::Int32 index)
		{
			return ((::SuperScrollView::StaggeredGridItemGroup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMGROUPBYINDEX_OFFSET))(this, index);
		}

		::SuperScrollView::StaggeredGridItemPrefabConfData* GetItemPrefabConfData(::System::String* prefabName)
		{
			return ((::SuperScrollView::StaggeredGridItemPrefabConfData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMPREFABCONFDATA_OFFSET))(this, prefabName);
		}

		::System::Void InitListView(::System::Int32 itemTotalCount, ::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>* onGetItemByItemIndex, ::XLua::LuaTable* luaTable, ::SuperScrollView::GridViewLayoutParam* param, ::SuperScrollView::StaggeredGridViewInitParam* initParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>*, ::XLua::LuaTable*, ::SuperScrollView::GridViewLayoutParam*, ::SuperScrollView::StaggeredGridViewInitParam*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_INITLISTVIEW_OFFSET))(this, itemTotalCount, onGetItemByItemIndex, luaTable, param, initParam);
		}

		::System::Void ResetGridViewLayoutParam(::System::Int32 itemTotalCount, ::SuperScrollView::GridViewLayoutParam* layoutParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::SuperScrollView::GridViewLayoutParam*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RESETGRIDVIEWLAYOUTPARAM_OFFSET))(this, itemTotalCount, layoutParam);
		}

		::System::Void UpdateLayoutParamAutoValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATELAYOUTPARAMAUTOVALUE_OFFSET))(this);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* NewListViewItem(::System::String* itemPrefabName)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_NEWLISTVIEWITEM_OFFSET))(this, itemPrefabName);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* NewListViewItem_1(::System::Int32 index)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_NEWLISTVIEWITEM_1_OFFSET))(this, index);
		}

		::System::Void SetListItemCount(::System::Int32 itemCount, ::System::Boolean resetPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SETLISTITEMCOUNT_OFFSET))(this, itemCount, resetPos);
		}

		::System::Void MovePanelToItemIndex(::System::Int32 itemIndex, ::System::Single offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_MOVEPANELTOITEMINDEX_OFFSET))(this, itemIndex, offset);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetShownItemByItemIndex(::System::Int32 itemIndex)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET))(this, itemIndex);
		}

		::System::Void RefreshAllShownItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_REFRESHALLSHOWNITEM_OFFSET))(this);
		}

		::System::Void OnItemSizeChanged(::System::Int32 itemIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONITEMSIZECHANGED_OFFSET))(this, itemIndex);
		}

		::System::Void RefreshItemByItemIndex(::System::Int32 itemIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_REFRESHITEMBYITEMINDEX_OFFSET))(this, itemIndex);
		}

		::System::Void ResetListView(::System::Boolean resetPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RESETLISTVIEW_OFFSET))(this, resetPos);
		}

		::System::Single get_ViewPortSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_VIEWPORTSIZE_OFFSET))(this);
		}

		::System::Single get_ViewPortWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_VIEWPORTWIDTH_OFFSET))(this);
		}

		::System::Single get_ViewPortHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_VIEWPORTHEIGHT_OFFSET))(this);
		}

		::System::Void RecycleAllItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RECYCLEALLITEM_OFFSET))(this);
		}

		::System::Void RecycleItemTmp(::SuperScrollView::LoopStaggeredGridViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RECYCLEITEMTMP_OFFSET))(this, item);
		}

		::System::Void ClearAllTmpRecycledItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CLEARALLTMPRECYCLEDITEM_OFFSET))(this);
		}

		::System::Void AdjustContainerPivot(::UnityEngine::RectTransform* rtf)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTCONTAINERPIVOT_OFFSET))(this, rtf);
		}

		::System::Void AdjustPivot(::UnityEngine::RectTransform* rtf)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTPIVOT_OFFSET))(this, rtf);
		}

		::System::Void AdjustContainerAnchor(::UnityEngine::RectTransform* rtf)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTCONTAINERANCHOR_OFFSET))(this, rtf);
		}

		::System::Void AdjustAnchor(::UnityEngine::RectTransform* rtf)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTANCHOR_OFFSET))(this, rtf);
		}

		::System::Void InitItemPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_INITITEMPOOL_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void CacheDragPointerEventData(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CACHEDRAGPOINTEREVENTDATA_OFFSET))(this, eventData);
		}

		::System::Int32 get_CurMaxCreatedItemIndexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_CURMAXCREATEDITEMINDEXCOUNT_OFFSET))(this);
		}

		::System::Void SetAnchoredPositionX(::UnityEngine::RectTransform* rtf, ::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SETANCHOREDPOSITIONX_OFFSET))(this, rtf, x);
		}

		::System::Void SetAnchoredPositionY(::UnityEngine::RectTransform* rtf, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SETANCHOREDPOSITIONY_OFFSET))(this, rtf, y);
		}

		::SuperScrollView::ItemIndexData* GetItemIndexData(::System::Int32 itemIndex)
		{
			return ((::SuperScrollView::ItemIndexData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMINDEXDATA_OFFSET))(this, itemIndex);
		}

		::System::Void UpdateAllGroupShownItemsPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATEALLGROUPSHOWNITEMSPOS_OFFSET))(this);
		}

		::System::Void CheckAllGroupIfNeedUpdateItemPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CHECKALLGROUPIFNEEDUPDATEITEMPOS_OFFSET))(this);
		}

		::System::Single GetItemAbsPosByItemIndex(::System::Int32 itemIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMABSPOSBYITEMINDEX_OFFSET))(this, itemIndex);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetNewItemByGroupAndIndex(::System::Int32 groupIndex, ::System::Int32 indexInGroup)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETNEWITEMBYGROUPANDINDEX_OFFSET))(this, groupIndex, indexInGroup);
		}

		::System::Int32 GetCurShouldAddNewItemGroupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETCURSHOULDADDNEWITEMGROUPINDEX_OFFSET))(this);
		}

		::System::Void UpdateListViewWithDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATELISTVIEWWITHDEFAULT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateListView(::System::Single distanceForRecycle0, ::System::Single distanceForRecycle1, ::System::Single distanceForNew0, ::System::Single distanceForNew1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATELISTVIEW_OFFSET))(this, distanceForRecycle0, distanceForRecycle1, distanceForNew0, distanceForNew1);
		}

		::System::Single GetContentSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETCONTENTSIZE_OFFSET))(this);
		}

		::System::Void UpdateContentSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATECONTENTSIZE_OFFSET))(this);
		}

		::System::Boolean AdjustColumnOrRow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTCOLUMNORROW_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetItemByGroupAndGroupIndex(::System::Int32 GroupIndex, ::System::Int32 IndexInGroup)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMBYGROUPANDGROUPINDEX_OFFSET))(this, GroupIndex, IndexInGroup);
		}

		::System::Void OnItemNew(::SuperScrollView::LoopStaggeredGridViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONITEMNEW_OFFSET))(this, item);
		}

		::System::Void OnAnimatorButtonSelected(::RPG::Client::AnimatorButton* button)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONANIMATORBUTTONSELECTED_OFFSET))(this, button);
		}

		::System::Boolean IsContainerTransCanMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ISCONTAINERTRANSCANMOVE_OFFSET))(this);
		}

		::System::Void OnItemRecycle(::SuperScrollView::LoopStaggeredGridViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONITEMRECYCLE_OFFSET))(this, item);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CLEARALL_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_DESPAWNED_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SPAWNED_OFFSET))(this);
		}
	};
}

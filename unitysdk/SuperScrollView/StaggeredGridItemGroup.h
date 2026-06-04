#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/ItemCornerEnum.h"
#include "unitysdk/SuperScrollView/ListItemArrangeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace SuperScrollView { class ItemPosMgr; }
namespace SuperScrollView { class LoopStaggeredGridView; }
namespace SuperScrollView { class LoopStaggeredGridViewItem; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }

#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_CHECKIFNEEDUPDATEITEMPOS_OFFSET UNITYSDK_OFFSET(0xD0DA340)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_CLEARALLTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0xD0DE3A0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETCONTENTPANELSIZE_OFFSET UNITYSDK_OFFSET(0xD0DBB10)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETINDEXINSHOWNITEMLIST_OFFSET UNITYSDK_OFFSET(0xD0DDC80)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETITEMCORNERPOSINVIEWPORT_OFFSET UNITYSDK_OFFSET(0xD0DE8A0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETITEMPOS_OFFSET UNITYSDK_OFFSET(0xD0DA890)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETNEWITEMBYINDEXINGROUP_OFFSET UNITYSDK_OFFSET(0xD0DE340)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETPLUSITEMINDEXANDPOSATGIVENPOS_OFFSET UNITYSDK_OFFSET(0xD0DE810)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMBYINDEXINGROUP_OFFSET UNITYSDK_OFFSET(0xD0D80B0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0xD0DD9F0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMPOSMAXVALUE_OFFSET UNITYSDK_OFFSET(0xD0DB560)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_HADCREATEDITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xD0DE9C0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_ISDRAGING_OFFSET UNITYSDK_OFFSET(0xD0DDC60)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_ITEMINDEXMAP_OFFSET UNITYSDK_OFFSET(0xD0DD980)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_VIEWPORTHEIGHT_OFFSET UNITYSDK_OFFSET(0xD0DDBF0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_VIEWPORTSIZE_OFFSET UNITYSDK_OFFSET(0xD0DDAE0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_VIEWPORTWIDTH_OFFSET UNITYSDK_OFFSET(0xD0DDB80)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_INIT_OFFSET UNITYSDK_OFFSET(0xD0D5ED0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_ONITEMSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xD0D8350)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RECYCLEALLITEM_OFFSET UNITYSDK_OFFSET(0xD0D89F0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RECYCLEITEMTMP_OFFSET UNITYSDK_OFFSET(0xD0DE2E0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEMWITHFIRSTINDEXANDPOS_OFFSET UNITYSDK_OFFSET(0xD0DE3F0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEMWITHFIRSTINDEXINGROUP_OFFSET UNITYSDK_OFFSET(0xD0DDD40)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEM_OFFSET UNITYSDK_OFFSET(0xD0D8240)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHITEMBYINDEXINGROUP_OFFSET UNITYSDK_OFFSET(0xD0D8580)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RESETLISTVIEW_OFFSET UNITYSDK_OFFSET(0xD0DD990)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_SETITEMSIZE_OFFSET UNITYSDK_OFFSET(0xD0DE250)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_SETLISTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xD0D7350)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEALLSHOWNITEMSPOS_OFFSET UNITYSDK_OFFSET(0xD0D9B70)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORHORIZONTALLISTPART1_OFFSET UNITYSDK_OFFSET(0xD0E04A0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORHORIZONTALLISTPART2_OFFSET UNITYSDK_OFFSET(0xD0E2B10)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORVERTLISTPART1_OFFSET UNITYSDK_OFFSET(0xD0DEBD0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORVERTLISTPART2_OFFSET UNITYSDK_OFFSET(0xD0E1D50)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEITEMINDEXMAP_OFFSET UNITYSDK_OFFSET(0xD0DEA10)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATELISTVIEWPART1_OFFSET UNITYSDK_OFFSET(0xD0DB820)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATELISTVIEWPART2_OFFSET UNITYSDK_OFFSET(0xD0DBA30)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xD0D5DE0)

namespace SuperScrollView
{
	inline static constexpr unsigned int StaggeredGridItemGroup_TypeDefinitionIndex = 44967;

	class StaggeredGridItemGroup : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* mContainerTrans; // 0x10
		::UnityEngine::RectTransform* mViewPortRectTransform; // 0x18
		::SuperScrollView::LoopStaggeredGridView* mParentGridView; // 0x20
		::System::Collections::Generic::List_1<::SuperScrollView::LoopStaggeredGridViewItem*>* mItemList; // 0x28
		::UnityEngine::RectTransform* mScrollRectTransform; // 0x30
		::System::Func_3<::System::Int32, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>* mOnGetItemByIndex; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* mItemIndexMap; // 0x40
		::UnityEngine::GameObject* mGameObject; // 0x48
		::SuperScrollView::ItemPosMgr* mItemPosMgr; // 0x50
		::Il2CppArray<::UnityEngine::Vector3>* mItemWorldCorners; // 0x58
		::Il2CppArray<::UnityEngine::Vector3>* mViewPortRectLocalCorners; // 0x60
		::UnityEngine::UI::ScrollRect* mScrollRect; // 0x68
		::System::Single mLastItemPadding; // 0x70
		::SuperScrollView::ListItemArrangeType mArrangeType; // 0x74
		::System::Boolean mNeedCheckNextMinItem; // 0x78
		::System::Boolean mNeedCheckNextMaxItem; // 0x79
		::System::Boolean mIsVertList; // 0x7A
		::System::Boolean mSupportScrollBar; // 0x7B
		::System::Int32 mLastItemIndex; // 0x7C
		::System::Int32 mCurReadyMinItemIndex; // 0x80
		::System::Int32 mCurReadyMaxItemIndex; // 0x84
		::System::Int32 mItemTotalCount; // 0x88
		::System::Single mItemDefaultWithPaddingSize; // 0x8C
		::System::Int32 mGroupIndex; // 0x90
		::UnityEngine::Vector3 mLastFrameContainerPos; // 0x94
		::System::Int32 mListUpdateCheckFrameCount; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Init(::SuperScrollView::LoopStaggeredGridView* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Func_3<::System::Int32, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32, ::System::Int32, ::System::Func_3<::System::Int32, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_ItemIndexMap()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_ITEMINDEXMAP_OFFSET))(this);
		}

		::System::Void ResetListView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RESETLISTVIEW_OFFSET))(this);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetShownItemByItemIndex(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMBYITEMINDEX_OFFSET))(this, a1);
		}

		::System::Single get_ViewPortSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_VIEWPORTSIZE_OFFSET))(this);
		}

		::System::Single get_ViewPortWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_VIEWPORTWIDTH_OFFSET))(this);
		}

		::System::Single get_ViewPortHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_VIEWPORTHEIGHT_OFFSET))(this);
		}

		::System::Boolean get_IsDraging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_ISDRAGING_OFFSET))(this);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetShownItemByIndexInGroup(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMBYINDEXINGROUP_OFFSET))(this, a1);
		}

		::System::Int32 GetIndexInShownItemList(::SuperScrollView::LoopStaggeredGridViewItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETINDEXINSHOWNITEMLIST_OFFSET))(this, a1);
		}

		::System::Void RefreshAllShownItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEM_OFFSET))(this);
		}

		::System::Void OnItemSizeChanged(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_ONITEMSIZECHANGED_OFFSET))(this, a1);
		}

		::System::Void RefreshItemByIndexInGroup(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHITEMBYINDEXINGROUP_OFFSET))(this, a1);
		}

		::System::Void RefreshAllShownItemWithFirstIndexInGroup(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEMWITHFIRSTINDEXINGROUP_OFFSET))(this, a1);
		}

		::System::Void RefreshAllShownItemWithFirstIndexAndPos(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEMWITHFIRSTINDEXANDPOS_OFFSET))(this, a1, a2);
		}

		::System::Void SetItemSize(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_SETITEMSIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetPlusItemIndexAndPosAtGivenPos(::System::Single a1, ::System::Int32& a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETPLUSITEMINDEXANDPOSATGIVENPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetItemPos(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETITEMPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetItemCornerPosInViewPort(::SuperScrollView::LoopStaggeredGridViewItem* a1, ::SuperScrollView::ItemCornerEnum a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*, ::SuperScrollView::ItemCornerEnum))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETITEMCORNERPOSINVIEWPORT_OFFSET))(this, a1, a2);
		}

		::System::Void RecycleItemTmp(::SuperScrollView::LoopStaggeredGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RECYCLEITEMTMP_OFFSET))(this, a1);
		}

		::System::Void RecycleAllItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RECYCLEALLITEM_OFFSET))(this);
		}

		::System::Void ClearAllTmpRecycledItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_CLEARALLTMPRECYCLEDITEM_OFFSET))(this);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetNewItemByIndexInGroup(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETNEWITEMBYINDEXINGROUP_OFFSET))(this, a1);
		}

		::System::Int32 get_HadCreatedItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_HADCREATEDITEMCOUNT_OFFSET))(this);
		}

		::System::Void SetListItemCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_SETLISTITEMCOUNT_OFFSET))(this, a1);
		}

		::System::Void UpdateItemIndexMap(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEITEMINDEXMAP_OFFSET))(this, a1);
		}

		::System::Void UpdateListViewPart1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATELISTVIEWPART1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean UpdateListViewPart2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATELISTVIEWPART2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean UpdateForVertListPart1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORVERTLISTPART1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean UpdateForVertListPart2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORVERTLISTPART2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean UpdateForHorizontalListPart1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORHORIZONTALLISTPART1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean UpdateForHorizontalListPart2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORHORIZONTALLISTPART2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single GetContentPanelSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETCONTENTPANELSIZE_OFFSET))(this);
		}

		::System::Single GetShownItemPosMaxValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMPOSMAXVALUE_OFFSET))(this);
		}

		::System::Void CheckIfNeedUpdateItemPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_CHECKIFNEEDUPDATEITEMPOS_OFFSET))(this);
		}

		::System::Void UpdateAllShownItemsPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEALLSHOWNITEMSPOS_OFFSET))(this);
		}
	};
}

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

#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_CHECKIFNEEDUPDATEITEMPOS_OFFSET UNITYSDK_OFFSET(0xAC1C870)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_CLEARALLTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0xAC20580)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETCONTENTPANELSIZE_OFFSET UNITYSDK_OFFSET(0xAC1DD40)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETINDEXINSHOWNITEMLIST_OFFSET UNITYSDK_OFFSET(0xAC1FEE0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETITEMCORNERPOSINVIEWPORT_OFFSET UNITYSDK_OFFSET(0xAC20A30)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETITEMPOS_OFFSET UNITYSDK_OFFSET(0xAC1CD50)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETNEWITEMBYINDEXINGROUP_OFFSET UNITYSDK_OFFSET(0xAC20520)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETPLUSITEMINDEXANDPOSATGIVENPOS_OFFSET UNITYSDK_OFFSET(0xAC209A0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMBYINDEXINGROUP_OFFSET UNITYSDK_OFFSET(0xAC1A860)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0xAC1FC50)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMPOSMAXVALUE_OFFSET UNITYSDK_OFFSET(0xAC1D780)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_HADCREATEDITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xAC20B60)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_ISDRAGING_OFFSET UNITYSDK_OFFSET(0xAC1FEC0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_ITEMINDEXMAP_OFFSET UNITYSDK_OFFSET(0xAC1FBE0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_VIEWPORTHEIGHT_OFFSET UNITYSDK_OFFSET(0xAC1FE50)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_VIEWPORTSIZE_OFFSET UNITYSDK_OFFSET(0xAC1FD40)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_VIEWPORTWIDTH_OFFSET UNITYSDK_OFFSET(0xAC1FDE0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_INIT_OFFSET UNITYSDK_OFFSET(0xAC183F0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_ONITEMSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xAC1AB20)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RECYCLEALLITEM_OFFSET UNITYSDK_OFFSET(0xAC1B200)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RECYCLEITEMTMP_OFFSET UNITYSDK_OFFSET(0xAC204C0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEMWITHFIRSTINDEXANDPOS_OFFSET UNITYSDK_OFFSET(0xAC205D0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEMWITHFIRSTINDEXINGROUP_OFFSET UNITYSDK_OFFSET(0xAC1FFB0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEM_OFFSET UNITYSDK_OFFSET(0xAC1AA00)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHITEMBYINDEXINGROUP_OFFSET UNITYSDK_OFFSET(0xAC1AD50)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RESETLISTVIEW_OFFSET UNITYSDK_OFFSET(0xAC1FBF0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_SETITEMSIZE_OFFSET UNITYSDK_OFFSET(0xAC20430)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_SETLISTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xAC19860)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEALLSHOWNITEMSPOS_OFFSET UNITYSDK_OFFSET(0xAC1C130)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORHORIZONTALLISTPART1_OFFSET UNITYSDK_OFFSET(0xAC225B0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORHORIZONTALLISTPART2_OFFSET UNITYSDK_OFFSET(0xAC24B20)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORVERTLISTPART1_OFFSET UNITYSDK_OFFSET(0xAC20D00)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORVERTLISTPART2_OFFSET UNITYSDK_OFFSET(0xAC23E20)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEITEMINDEXMAP_OFFSET UNITYSDK_OFFSET(0xAC20BB0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATELISTVIEWPART1_OFFSET UNITYSDK_OFFSET(0xAC1DA60)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATELISTVIEWPART2_OFFSET UNITYSDK_OFFSET(0xAC1DC60)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xAC18300)

namespace SuperScrollView
{
	inline static constexpr unsigned int StaggeredGridItemGroup_TypeDefinitionIndex = 38539;

	class StaggeredGridItemGroup : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* mViewPortRectTransform; // 0x10
		::System::Collections::Generic::List_1<::SuperScrollView::LoopStaggeredGridViewItem*>* mItemList; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* mItemWorldCorners; // 0x20
		::System::Func_3<::System::Int32, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>* mOnGetItemByIndex; // 0x28
		::UnityEngine::GameObject* mGameObject; // 0x30
		::UnityEngine::UI::ScrollRect* mScrollRect; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* mItemIndexMap; // 0x40
		::SuperScrollView::LoopStaggeredGridView* mParentGridView; // 0x48
		::UnityEngine::RectTransform* mContainerTrans; // 0x50
		::SuperScrollView::ItemPosMgr* mItemPosMgr; // 0x58
		::UnityEngine::RectTransform* mScrollRectTransform; // 0x60
		::Il2CppArray<::UnityEngine::Vector3>* mViewPortRectLocalCorners; // 0x68
		::System::Single mItemDefaultWithPaddingSize; // 0x70
		::System::Single mLastItemPadding; // 0x74
		::System::Int32 mLastItemIndex; // 0x78
		::System::Boolean mNeedCheckNextMaxItem; // 0x7C
		::System::Boolean mNeedCheckNextMinItem; // 0x7D
		::System::Boolean mSupportScrollBar; // 0x7E
		::System::Boolean mIsVertList; // 0x7F
		::SuperScrollView::ListItemArrangeType mArrangeType; // 0x80
		::System::Int32 mCurReadyMaxItemIndex; // 0x84
		::System::Int32 mGroupIndex; // 0x88
		::System::Int32 mListUpdateCheckFrameCount; // 0x8C
		::UnityEngine::Vector3 mLastFrameContainerPos; // 0x90
		::System::Int32 mItemTotalCount; // 0x9C
		::System::Int32 mCurReadyMinItemIndex; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Init(::SuperScrollView::LoopStaggeredGridView* parent, ::System::Int32 itemTotalCount, ::System::Int32 groupIndex, ::System::Func_3<::System::Int32, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>* onGetItemByIndex)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32, ::System::Int32, ::System::Func_3<::System::Int32, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_INIT_OFFSET))(this, parent, itemTotalCount, groupIndex, onGetItemByIndex);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_ItemIndexMap()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_ITEMINDEXMAP_OFFSET))(this);
		}

		::System::Void ResetListView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RESETLISTVIEW_OFFSET))(this);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetShownItemByItemIndex(::System::Int32 itemIndex)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMBYITEMINDEX_OFFSET))(this, itemIndex);
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

		::SuperScrollView::LoopStaggeredGridViewItem* GetShownItemByIndexInGroup(::System::Int32 indexInGroup)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMBYINDEXINGROUP_OFFSET))(this, indexInGroup);
		}

		::System::Int32 GetIndexInShownItemList(::SuperScrollView::LoopStaggeredGridViewItem* item)
		{
			return ((::System::Int32(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETINDEXINSHOWNITEMLIST_OFFSET))(this, item);
		}

		::System::Void RefreshAllShownItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEM_OFFSET))(this);
		}

		::System::Void OnItemSizeChanged(::System::Int32 indexInGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_ONITEMSIZECHANGED_OFFSET))(this, indexInGroup);
		}

		::System::Void RefreshItemByIndexInGroup(::System::Int32 indexInGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHITEMBYINDEXINGROUP_OFFSET))(this, indexInGroup);
		}

		::System::Void RefreshAllShownItemWithFirstIndexInGroup(::System::Int32 firstItemIndexInGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEMWITHFIRSTINDEXINGROUP_OFFSET))(this, firstItemIndexInGroup);
		}

		::System::Void RefreshAllShownItemWithFirstIndexAndPos(::System::Int32 firstItemIndexInGroup, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEMWITHFIRSTINDEXANDPOS_OFFSET))(this, firstItemIndexInGroup, pos);
		}

		::System::Void SetItemSize(::System::Int32 itemIndex, ::System::Single itemSize, ::System::Single padding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_SETITEMSIZE_OFFSET))(this, itemIndex, itemSize, padding);
		}

		::System::Boolean GetPlusItemIndexAndPosAtGivenPos(::System::Single pos, ::System::Int32& index, ::System::Single& itemPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETPLUSITEMINDEXANDPOSATGIVENPOS_OFFSET))(this, pos, index, itemPos);
		}

		::System::Single GetItemPos(::System::Int32 itemIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETITEMPOS_OFFSET))(this, itemIndex);
		}

		::UnityEngine::Vector3 GetItemCornerPosInViewPort(::SuperScrollView::LoopStaggeredGridViewItem* item, ::SuperScrollView::ItemCornerEnum corner)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*, ::SuperScrollView::ItemCornerEnum))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETITEMCORNERPOSINVIEWPORT_OFFSET))(this, item, corner);
		}

		::System::Void RecycleItemTmp(::SuperScrollView::LoopStaggeredGridViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RECYCLEITEMTMP_OFFSET))(this, item);
		}

		::System::Void RecycleAllItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RECYCLEALLITEM_OFFSET))(this);
		}

		::System::Void ClearAllTmpRecycledItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_CLEARALLTMPRECYCLEDITEM_OFFSET))(this);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetNewItemByIndexInGroup(::System::Int32 indexInGroup)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETNEWITEMBYINDEXINGROUP_OFFSET))(this, indexInGroup);
		}

		::System::Int32 get_HadCreatedItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_HADCREATEDITEMCOUNT_OFFSET))(this);
		}

		::System::Void SetListItemCount(::System::Int32 itemCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_SETLISTITEMCOUNT_OFFSET))(this, itemCount);
		}

		::System::Void UpdateItemIndexMap(::System::Int32 oldItemTotalCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEITEMINDEXMAP_OFFSET))(this, oldItemTotalCount);
		}

		::System::Void UpdateListViewPart1(::System::Single distanceForRecycle0, ::System::Single distanceForRecycle1, ::System::Single distanceForNew0, ::System::Single distanceForNew1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATELISTVIEWPART1_OFFSET))(this, distanceForRecycle0, distanceForRecycle1, distanceForNew0, distanceForNew1);
		}

		::System::Boolean UpdateListViewPart2(::System::Single distanceForRecycle0, ::System::Single distanceForRecycle1, ::System::Single distanceForNew0, ::System::Single distanceForNew1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATELISTVIEWPART2_OFFSET))(this, distanceForRecycle0, distanceForRecycle1, distanceForNew0, distanceForNew1);
		}

		::System::Boolean UpdateForVertListPart1(::System::Single distanceForRecycle0, ::System::Single distanceForRecycle1, ::System::Single distanceForNew0, ::System::Single distanceForNew1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORVERTLISTPART1_OFFSET))(this, distanceForRecycle0, distanceForRecycle1, distanceForNew0, distanceForNew1);
		}

		::System::Boolean UpdateForVertListPart2(::System::Single distanceForRecycle0, ::System::Single distanceForRecycle1, ::System::Single distanceForNew0, ::System::Single distanceForNew1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORVERTLISTPART2_OFFSET))(this, distanceForRecycle0, distanceForRecycle1, distanceForNew0, distanceForNew1);
		}

		::System::Boolean UpdateForHorizontalListPart1(::System::Single distanceForRecycle0, ::System::Single distanceForRecycle1, ::System::Single distanceForNew0, ::System::Single distanceForNew1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORHORIZONTALLISTPART1_OFFSET))(this, distanceForRecycle0, distanceForRecycle1, distanceForNew0, distanceForNew1);
		}

		::System::Boolean UpdateForHorizontalListPart2(::System::Single distanceForRecycle0, ::System::Single distanceForRecycle1, ::System::Single distanceForNew0, ::System::Single distanceForNew1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORHORIZONTALLISTPART2_OFFSET))(this, distanceForRecycle0, distanceForRecycle1, distanceForNew0, distanceForNew1);
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

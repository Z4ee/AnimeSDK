#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/GridFixedType.h"
#include "unitysdk/SuperScrollView/GridItemArrangeType.h"
#include "unitysdk/SuperScrollView/RowColumnPair.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AnimatorButton; }
namespace SuperScrollView { class ClickEventListener; }
namespace SuperScrollView { class GridItemGroup; }
namespace SuperScrollView { class GridItemPool; }
namespace SuperScrollView { class GridViewItemPrefabConfData; }
namespace SuperScrollView { class LoopGridViewInitParam; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace SuperScrollView { class LoopGridViewSettingParam; }
namespace SuperScrollView { class LoopGridView_ItemRangeData; }
namespace SuperScrollView { class LoopGridView_SnapData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Func_6; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectOffset; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTCONTAINERANCHORANDPIVOT_OFFSET UNITYSDK_OFFSET(0x14EE2230)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTITEMANCHORANDPIVOT_OFFSET UNITYSDK_OFFSET(0x14EE8720)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTOBJECTINSTANCE_OFFSET UNITYSDK_OFFSET(0x14EE8890)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTVIEWPORTPIVOT_OFFSET UNITYSDK_OFFSET(0x14EE2150)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCPREPAREITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x14EEDFA0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCSETLISTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x14EEE060)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCUPDATEGRIDVIEWCONTENT_OFFSET UNITYSDK_OFFSET(0x14EE7A50)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCUPDATEROWITEMGROUPFORRECYCLEANDNEW_OFFSET UNITYSDK_OFFSET(0x14EEAB10)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_CANSNAP_OFFSET UNITYSDK_OFFSET(0x14EEBDB0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARALLTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0x14EE31D0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARALL_OFFSET UNITYSDK_OFFSET(0x14EEE6A0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARFADEIN_OFFSET UNITYSDK_OFFSET(0x14EECA90)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARFOCUSCACHE_OFFSET UNITYSDK_OFFSET(0x14EE67F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARSNAPDATA_OFFSET UNITYSDK_OFFSET(0x14EE51B0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_CREATEITEMGROUP_OFFSET UNITYSDK_OFFSET(0x14EE6E70)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x14EEEA70)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_FILLCURSNAPDATA_OFFSET UNITYSDK_OFFSET(0x14EEC210)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_FINDNEARESTITEMWITHLOCALPOS_OFFSET UNITYSDK_OFFSET(0x14EEACD0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_FINISHSETFINISHCOROUTINE_OFFSET UNITYSDK_OFFSET(0x14EE2D50)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_FINISHSNAPIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x14EEBD60)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_FORCEADJUSTITEMPIVOTANDANCHOR_OFFSET UNITYSDK_OFFSET(0x14EE86D0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_FORCESNAPUPDATECHECK_OFFSET UNITYSDK_OFFSET(0x14EE52C0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_FORCETOCHECKCONTENTPOS_OFFSET UNITYSDK_OFFSET(0x14EE3040)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETCEILITEMROWCOLUMNATGIVENABSPOS_OFFSET UNITYSDK_OFFSET(0x14EE9920)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETCONTAINERMOVEDDISTANCE_OFFSET UNITYSDK_OFFSET(0x14EEA9E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETCONTAINERVAILDPOS_OFFSET UNITYSDK_OFFSET(0x14EE64F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMABSPOS_OFFSET UNITYSDK_OFFSET(0x14EE59A0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMINDEXBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0x14EE5930)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMPOS_OFFSET UNITYSDK_OFFSET(0x14EE5410)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMPREFABCONFDATA_OFFSET UNITYSDK_OFFSET(0x14EE15A0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMSNAPPIVOTLOCALPOS_OFFSET UNITYSDK_OFFSET(0x14EEAF30)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETNEWITEMBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0x14EE4D00)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETONEITEMGROUPOBJ_OFFSET UNITYSDK_OFFSET(0x14EEA930)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETROWCOLUMNBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0x14EE4830)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETSHOWNGROUP_OFFSET UNITYSDK_OFFSET(0x14EE4C30)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0x14EE5A30)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETSHOWNITEMBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0x14EE5B10)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETVIEWPORTSNAPPIVOTLOCALPOS_OFFSET UNITYSDK_OFFSET(0x14EEB5C0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ARRANGETYPE_OFFSET UNITYSDK_OFFSET(0x14EE0DA0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_AUTOADAPTITEMSIZE_OFFSET UNITYSDK_OFFSET(0x14EED820)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_CONTAINERTRANS_OFFSET UNITYSDK_OFFSET(0x14EE0DE0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_CURSNAPNEARESTITEMROWCOLUMN_OFFSET UNITYSDK_OFFSET(0x14EE52B0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_FADEINLENGTH_OFFSET UNITYSDK_OFFSET(0x14EECA70)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_FADEINOFFSET_OFFSET UNITYSDK_OFFSET(0x14EECA50)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_INASYNCSETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x14EEE640)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISAUTOFADEIN_OFFSET UNITYSDK_OFFSET(0x14EED770)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISDRAGING_OFFSET UNITYSDK_OFFSET(0x14EE0EE0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISFLEXIBLECOUNT_OFFSET UNITYSDK_OFFSET(0x14EECA30)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISIGNORETRANSDIRTYWAIT_OFFSET UNITYSDK_OFFSET(0x14EEEB30)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISNAVITONEXTLINE_OFFSET UNITYSDK_OFFSET(0x14EEEB50)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISNEEDFADEIN_OFFSET UNITYSDK_OFFSET(0x14EED790)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISPCPLATFORMSIZE_OFFSET UNITYSDK_OFFSET(0x14EEEB70)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMGROUPLIST_OFFSET UNITYSDK_OFFSET(0x14EEC460)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMPADDING_OFFSET UNITYSDK_OFFSET(0x14EE1280)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMPOOLLIST_OFFSET UNITYSDK_OFFSET(0x14EEC470)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMPREFABDATALIST_OFFSET UNITYSDK_OFFSET(0x14EE0DC0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMPREVIEWCOUNT_OFFSET UNITYSDK_OFFSET(0x14EEEAC0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMSIZEWITHPADDING_OFFSET UNITYSDK_OFFSET(0x14EE1420)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMSIZE_OFFSET UNITYSDK_OFFSET(0x14EE0F10)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMSNAPENABLE_OFFSET UNITYSDK_OFFSET(0x14EE0EF0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x14EE0DD0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_MITEMSIZE_OFFSET UNITYSDK_OFFSET(0x14EE0F90)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x14EE1430)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_SCROLLRECT_OFFSET UNITYSDK_OFFSET(0x14EE0ED0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_VIEWPORTHEIGHT_OFFSET UNITYSDK_OFFSET(0x14EE0E60)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_VIEWPORTWIDTH_OFFSET UNITYSDK_OFFSET(0x14EE0DF0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_INITGRIDVIEW_OFFSET UNITYSDK_OFFSET(0x14EE1720)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_INITITEMPOOL_OFFSET UNITYSDK_OFFSET(0x14EE23A0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ISCONTAINERTRANSCANMOVE_OFFSET UNITYSDK_OFFSET(0x14EE7AF0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ISINIGROREREFRESH_OFFSET UNITYSDK_OFFSET(0x14EEEBE0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ISITEMOUTOFVIEWPORT_OFFSET UNITYSDK_OFFSET(0x14EEECC0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ISITEMWITHINVIEWPORT_OFFSET UNITYSDK_OFFSET(0x14EEEC30)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ISREPEATUPDATE_OFFSET UNITYSDK_OFFSET(0x14EE5690)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_MARKNEXTFRAMEREFRESH_OFFSET UNITYSDK_OFFSET(0x14EEEB90)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_MOVEPANELTOITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0x14EE5320)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_MOVEPANELTOITEMBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0x14EE3400)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_NEWLISTVIEWITEM_1_OFFSET UNITYSDK_OFFSET(0x14EEC480)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_NEWLISTVIEWITEM_OFFSET UNITYSDK_OFFSET(0x14EE4440)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONANIMATORBUTTONSELECTED_OFFSET UNITYSDK_OFFSET(0x14EED940)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x14EE56F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14EEE650)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONDRAG_OFFSET UNITYSDK_OFFSET(0x14EE58B0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14EED7B0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x14EE57E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONITEMNEW_OFFSET UNITYSDK_OFFSET(0x14EE8990)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0x14EE7D70)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONPOINTERDOWNINSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x14EEABB0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONPOINTERUPINSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x14EEAC40)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x14EED840)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONSETLISTITEMFINISH_OFFSET UNITYSDK_OFFSET(0x14EEE520)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x14EECE60)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_PREPAREINSTANCEITEM_OFFSET UNITYSDK_OFFSET(0x14EEA770)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_RECYCLEALLITEM_OFFSET UNITYSDK_OFFSET(0x14EE30A0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_RECYCLEITEMGROUPTMP_OFFSET UNITYSDK_OFFSET(0x14EE6860)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_RECYCLEITEMTMP_OFFSET UNITYSDK_OFFSET(0x14EE5090)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_RECYCLEONEITEMGROUPOBJ_OFFSET UNITYSDK_OFFSET(0x14EE7CB0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHALLITEMSIZEONSCREENCHANGED_OFFSET UNITYSDK_OFFSET(0x14EE9E10)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHALLSHOWNITEM_OFFSET UNITYSDK_OFFSET(0x14EE5560)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHDIRTYCHECK_OFFSET UNITYSDK_OFFSET(0x14EE9DA0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0x14EE4750)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHITEMBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0x14EE48B0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHVIEWPORTANDCONTENTPIVOTANDANCHOR_OFFSET UNITYSDK_OFFSET(0x14EE8680)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SAFEINITGRIDVIEW_OFFSET UNITYSDK_OFFSET(0x14EEC840)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SETGRIDFIXEDGROUPCOUNT_OFFSET UNITYSDK_OFFSET(0x14EE6290)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SETITEMPADDING_OFFSET UNITYSDK_OFFSET(0x14EE12E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SETITEMSIZE_OFFSET UNITYSDK_OFFSET(0x14EE1060)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SETLISTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x14EE2A50)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SETPADDING_OFFSET UNITYSDK_OFFSET(0x14EE1490)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SETSCROLLBARLISTENER_OFFSET UNITYSDK_OFFSET(0x14EE1E40)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SETSNAPTARGETITEMROWCOLUMN_OFFSET UNITYSDK_OFFSET(0x14EE5230)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ARRANGETYPE_OFFSET UNITYSDK_OFFSET(0x14EE0DB0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_AUTOADAPTITEMSIZE_OFFSET UNITYSDK_OFFSET(0x14EED830)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_FADEINLENGTH_OFFSET UNITYSDK_OFFSET(0x14EECA80)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_FADEINOFFSET_OFFSET UNITYSDK_OFFSET(0x14EECA60)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISAUTOFADEIN_OFFSET UNITYSDK_OFFSET(0x14EED780)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISFLEXIBLECOUNT_OFFSET UNITYSDK_OFFSET(0x14EECA40)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISIGNORETRANSDIRTYWAIT_OFFSET UNITYSDK_OFFSET(0x14EEEB40)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISNAVITONEXTLINE_OFFSET UNITYSDK_OFFSET(0x14EEEB60)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISNEEDFADEIN_OFFSET UNITYSDK_OFFSET(0x14EED7A0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISPCPLATFORMSIZE_OFFSET UNITYSDK_OFFSET(0x14EEEB80)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMPADDING_OFFSET UNITYSDK_OFFSET(0x14EE1290)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMPREVIEWCOUNT_OFFSET UNITYSDK_OFFSET(0x14EEEAD0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMSIZE_OFFSET UNITYSDK_OFFSET(0x14EE1010)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMSNAPENABLE_OFFSET UNITYSDK_OFFSET(0x14EE0F00)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_MITEMSIZE_OFFSET UNITYSDK_OFFSET(0x14EE6460)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x14EE1440)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SPAWNED_OFFSET UNITYSDK_OFFSET(0x14EEEA30)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEALLGRIDSETTING_OFFSET UNITYSDK_OFFSET(0x14EE28B0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECOLUMNITEMGROUPFORRECYCLEANDNEW_OFFSET UNITYSDK_OFFSET(0x14EE7490)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECOLUMNROWCOUNT_OFFSET UNITYSDK_OFFSET(0x14EE2E10)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECONTENTSIZE_OFFSET UNITYSDK_OFFSET(0x14EE2EC0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECURFRAMEITEMRANGEDATA_OFFSET UNITYSDK_OFFSET(0x14EE6A70)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECURSNAPDATA_OFFSET UNITYSDK_OFFSET(0x14EEBF50)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEFROMSETTINGPARAM_OFFSET UNITYSDK_OFFSET(0x14EE1B00)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEGRIDVIEWCONTENT_OFFSET UNITYSDK_OFFSET(0x14EE3970)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEITEMSIZE_OFFSET UNITYSDK_OFFSET(0x14EE5F00)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATENEARESTSNAPITEM_OFFSET UNITYSDK_OFFSET(0x14EEBAE0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEROWITEMGROUPFORRECYCLEANDNEW_OFFSET UNITYSDK_OFFSET(0x14EE6ED0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATESNAPMOVE_OFFSET UNITYSDK_OFFSET(0x14EEA180)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATESTARTENDPADDING_OFFSET UNITYSDK_OFFSET(0x14EE5C60)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x14EE9A30)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_VAILDANDSETCONTAINERPOS_OFFSET UNITYSDK_OFFSET(0x14EE32D0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__CHANGEONGETITEMBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0x14EEC990)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__CHANGETABLE_OFFSET UNITYSDK_OFFSET(0x14EEC9E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x14EEF2E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__TICKFADEIN_OFFSET UNITYSDK_OFFSET(0x14EEA620)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__UPDATEFLEXIBLEFIXEDCOUNT_OFFSET UNITYSDK_OFFSET(0x14EE9C20)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopGridView_TypeDefinitionIndex = 45861;

	class LoopGridView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::SuperScrollView::GridItemPool*>* mItemPoolDict; // 0x18
		::System::Collections::Generic::List_1<::SuperScrollView::GridItemPool*>* mItemPoolList; // 0x20
		::System::Collections::Generic::List_1<::SuperScrollView::GridViewItemPrefabConfData*>* mItemPrefabDataList; // 0x28
		::SuperScrollView::GridItemArrangeType mArrangeType; // 0x30
		::UnityEngine::RectTransform* mContainerTrans; // 0x38
		::UnityEngine::UI::ScrollRect* mScrollRect; // 0x40
		::UnityEngine::RectTransform* mScrollRectTransform; // 0x48
		::UnityEngine::RectTransform* mViewPortRectTransform; // 0x50
		::System::Int32 mItemTotalCount; // 0x58
		::System::Int32 mFixedRowOrColumnCount; // 0x5C
		::UnityEngine::RectOffset* mPadding; // 0x60
		::UnityEngine::Vector2 mItemPadding; // 0x68
		::UnityEngine::Vector2 mItemSize; // 0x70
		::UnityEngine::Vector2 mItemRecycleDistance; // 0x78
		::UnityEngine::Vector2 mItemSizeWithPadding; // 0x80
		::UnityEngine::Vector2 mStartPadding; // 0x88
		::UnityEngine::Vector2 mEndPadding; // 0x90
		::System::Func_6<::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32, ::SuperScrollView::LoopGridViewItem*>* mOnGetItemByRowColumn; // 0x98
		::XLua::LuaTable* mLuaTable; // 0xA0
		::System::Collections::Generic::List_1<::SuperScrollView::GridItemGroup*>* mItemGroupObjPool; // 0xA8
		::System::Collections::Generic::List_1<::SuperScrollView::GridItemGroup*>* mItemGroupList; // 0xB0
		::System::Boolean mIsDraging; // 0xB8
		::System::Int32 mRowCount; // 0xBC
		::System::Int32 mColumnCount; // 0xC0
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* mOnBeginDragAction; // 0xC8
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* mOnDragingAction; // 0xD0
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* mOnEndDragAction; // 0xD8
		::System::Action* mOnEndPlayFadeInAction; // 0xE0
		::System::Action* mOnFadeInEndAction; // 0xE8
		::System::Single mSmoothDumpVel; // 0xF0
		::System::Single mSmoothDumpRate; // 0xF4
		::System::Single mSnapFinishThreshold; // 0xF8
		::System::Single mSnapVecThreshold; // 0xFC
		::System::Boolean mItemSnapEnable; // 0x100
		::SuperScrollView::GridFixedType mGridFixedType; // 0x104
		::System::Action_2<::SuperScrollView::LoopGridView*, ::SuperScrollView::LoopGridViewItem*>* mOnSnapItemFinished; // 0x108
		::System::Action_1<::SuperScrollView::LoopGridView*>* mOnSnapNearestChanged; // 0x110
		::System::Int32 mLeftSnapUpdateExtraCount; // 0x118
		::UnityEngine::Vector2 mViewPortSnapPivot; // 0x11C
		::UnityEngine::Vector2 mItemSnapPivot; // 0x124
		::SuperScrollView::LoopGridView_SnapData* mCurSnapData; // 0x130
		::UnityEngine::Vector3 mLastSnapCheckPos; // 0x138
		::System::Boolean mListViewInited; // 0x144
		::System::Int32 mListUpdateCheckFrameCount; // 0x148
		::SuperScrollView::LoopGridView_ItemRangeData* mCurFrameItemRangeData; // 0x150
		::System::Int32 mNeedCheckContentPosLeftCount; // 0x158
		::SuperScrollView::ClickEventListener* mScrollBarClickEventListener1; // 0x160
		::SuperScrollView::ClickEventListener* mScrollBarClickEventListener2; // 0x168
		::SuperScrollView::RowColumnPair mCurSnapNearestItemRowColumn; // 0x170
		::System::Boolean flexibleCountChecked; // 0x178
		::System::Boolean lastDirty; // 0x179
		::System::Boolean InTransformChange; // 0x17A
		::System::Boolean _isFlexibleCount; // 0x17B
		::System::Single _fadeInBeginStamp; // 0x17C
		::System::Single _fadeInEndStamp; // 0x180
		::System::Boolean _isInFadeIn; // 0x184
		::System::Single _fadeInOffset; // 0x188
		::System::Single _fadeInLength; // 0x18C
		::System::Boolean _isAutoFadeIn; // 0x190
		::System::Boolean _isNeedFadeIn; // 0x191
		::System::Boolean _isStopedInFadeIn; // 0x192
		::System::Boolean _autoAdaptItemSize; // 0x193
		::System::Boolean _isAutoCenter; // 0x194
		::System::Collections::Generic::Dictionary_2<::SuperScrollView::RowColumnPair, ::SuperScrollView::LoopGridViewItem*>* NaviMapDict; // 0x198
		::System::Boolean cachedFocused; // 0x1A0
		::SuperScrollView::RowColumnPair focusedRowColumn; // 0x1A4
		::SuperScrollView::RowColumnPair waitingRowColumn; // 0x1AC
		::SuperScrollView::RowColumnPair defaultRowColumn; // 0x1B4
		::System::Int32 focusedInstanceID; // 0x1BC
		::System::Int32 focusedFrameCount; // 0x1C0
		::System::Boolean inNaviSelect; // 0x1C4
		::System::Int32 mPreparePoolItemCount; // 0x1C8
		::System::Int32 mPerFrameCount; // 0x1CC
		::System::Int32 mPreparePrefabIndex; // 0x1D0
		::System::Action_1<::XLua::LuaTable*>* prepareAction; // 0x1D8
		::System::Boolean mInPrepare; // 0x1E0
		::System::Boolean inAsyncSetItemCount; // 0x1E1
		::System::Action_1<::XLua::LuaTable*>* onSetCountFinish; // 0x1E8
		::UnityEngine::Coroutine* setCountCoroutine; // 0x1F0
		::System::Boolean setCountRestPos; // 0x1F8
		::System::Int32 setCountYeildCount; // 0x1FC
		::System::Int32 mItemPreviewCount; // 0x200
		::System::Boolean isInProfile; // 0x204
		::System::Boolean isIgnoreTransDirtyWait; // 0x205
		::System::Boolean isNaviToNextLine; // 0x206
		::System::Boolean isPCPlatformSize; // 0x207
		::UnityEngine::Vector2 mPCItemSize; // 0x208
		::System::Boolean isRowNaviLoop; // 0x210
		::System::Int32 lastUpdateFrame; // 0x214
		::System::Boolean mMarkRefresh; // 0x218
		::Il2CppArray<::UnityEngine::Vector3>* tempPoints; // 0x220

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__CTOR_OFFSET))(this);
		}

		::SuperScrollView::GridItemArrangeType get_ArrangeType()
		{
			return ((::SuperScrollView::GridItemArrangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ARRANGETYPE_OFFSET))(this);
		}

		::System::Void set_ArrangeType(::SuperScrollView::GridItemArrangeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::GridItemArrangeType))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ARRANGETYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::SuperScrollView::GridViewItemPrefabConfData*>* get_ItemPrefabDataList()
		{
			return ((::System::Collections::Generic::List_1<::SuperScrollView::GridViewItemPrefabConfData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMPREFABDATALIST_OFFSET))(this);
		}

		::System::Int32 get_ItemTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMTOTALCOUNT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ContainerTrans()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_CONTAINERTRANS_OFFSET))(this);
		}

		::System::Single get_ViewPortWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_VIEWPORTWIDTH_OFFSET))(this);
		}

		::System::Single get_ViewPortHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_VIEWPORTHEIGHT_OFFSET))(this);
		}

		::UnityEngine::UI::ScrollRect* get_ScrollRect()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_SCROLLRECT_OFFSET))(this);
		}

		::System::Boolean get_IsDraging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISDRAGING_OFFSET))(this);
		}

		::System::Boolean get_ItemSnapEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMSNAPENABLE_OFFSET))(this);
		}

		::System::Void set_ItemSnapEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMSNAPENABLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_ItemSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMSIZE_OFFSET))(this);
		}

		::System::Void set_ItemSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_ItemPadding()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMPADDING_OFFSET))(this);
		}

		::System::Void set_ItemPadding(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMPADDING_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_ItemSizeWithPadding()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMSIZEWITHPADDING_OFFSET))(this);
		}

		::UnityEngine::RectOffset* get_Padding()
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_Padding(::UnityEngine::RectOffset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_PADDING_OFFSET))(this, a1);
		}

		::SuperScrollView::GridViewItemPrefabConfData* GetItemPrefabConfData(::System::String* a1)
		{
			return ((::SuperScrollView::GridViewItemPrefabConfData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMPREFABCONFDATA_OFFSET))(this, a1);
		}

		::System::Void InitGridView(::System::Int32 a1, ::System::Func_6<::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32, ::SuperScrollView::LoopGridViewItem*>* a2, ::SuperScrollView::LoopGridViewSettingParam* a3, ::SuperScrollView::LoopGridViewInitParam* a4, ::XLua::LuaTable* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_6<::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32, ::SuperScrollView::LoopGridViewItem*>*, ::SuperScrollView::LoopGridViewSettingParam*, ::SuperScrollView::LoopGridViewInitParam*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_INITGRIDVIEW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetListItemCount(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SETLISTITEMCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::SuperScrollView::LoopGridViewItem* NewListViewItem(::System::String* a1)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_NEWLISTVIEWITEM_OFFSET))(this, a1);
		}

		::System::Void RefreshItemByItemIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHITEMBYITEMINDEX_OFFSET))(this, a1);
		}

		::System::Void RefreshItemByRowColumn(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHITEMBYROWCOLUMN_OFFSET))(this, a1, a2);
		}

		::System::Void ClearSnapData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARSNAPDATA_OFFSET))(this);
		}

		::System::Void SetSnapTargetItemRowColumn(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SETSNAPTARGETITEMROWCOLUMN_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::RowColumnPair get_CurSnapNearestItemRowColumn()
		{
			return ((::SuperScrollView::RowColumnPair(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_CURSNAPNEARESTITEMROWCOLUMN_OFFSET))(this);
		}

		::System::Void ForceSnapUpdateCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_FORCESNAPUPDATECHECK_OFFSET))(this);
		}

		::System::Void ForceToCheckContentPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_FORCETOCHECKCONTENTPOS_OFFSET))(this);
		}

		::System::Void MovePanelToItemByIndex(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_MOVEPANELTOITEMBYINDEX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MovePanelToItemByRowColumn(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_MOVEPANELTOITEMBYROWCOLUMN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RefreshAllShownItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHALLSHOWNITEM_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONDRAG_OFFSET))(this, a1);
		}

		::System::Int32 GetItemIndexByRowColumn(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMINDEXBYROWCOLUMN_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::RowColumnPair GetRowColumnByItemIndex(::System::Int32 a1)
		{
			return ((::SuperScrollView::RowColumnPair(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETROWCOLUMNBYITEMINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetItemAbsPos(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMABSPOS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 GetItemPos(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMPOS_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::LoopGridViewItem* GetShownItemByItemIndex(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* GetShownItemByRowColumn(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETSHOWNITEMBYROWCOLUMN_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAllGridSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEALLGRIDSETTING_OFFSET))(this);
		}

		::System::Void SetGridFixedGroupCount(::SuperScrollView::GridFixedType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::GridFixedType, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SETGRIDFIXEDGROUPCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void SetItemSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SETITEMSIZE_OFFSET))(this, a1);
		}

		::System::Void SetItemPadding(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SETITEMPADDING_OFFSET))(this, a1);
		}

		::System::Void SetPadding(::UnityEngine::RectOffset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SETPADDING_OFFSET))(this, a1);
		}

		::System::Void UpdateContentSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECONTENTSIZE_OFFSET))(this);
		}

		::System::Void VaildAndSetContainerPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_VAILDANDSETCONTAINERPOS_OFFSET))(this);
		}

		::System::Void ClearAllTmpRecycledItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARALLTMPRECYCLEDITEM_OFFSET))(this);
		}

		::System::Void RecycleAllItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_RECYCLEALLITEM_OFFSET))(this);
		}

		::System::Void UpdateGridViewContent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEGRIDVIEWCONTENT_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* AsyncUpdateGridViewContent(::System::Action* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCUPDATEGRIDVIEWCONTENT_OFFSET))(this, a1);
		}

		::System::Void UpdateStartEndPadding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATESTARTENDPADDING_OFFSET))(this);
		}

		::System::Void UpdateItemSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEITEMSIZE_OFFSET))(this);
		}

		::System::Void UpdateColumnRowCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECOLUMNROWCOUNT_OFFSET))(this);
		}

		::System::Boolean IsContainerTransCanMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ISCONTAINERTRANSCANMOVE_OFFSET))(this);
		}

		::System::Void RecycleItemGroupTmp(::SuperScrollView::GridItemGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::GridItemGroup*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_RECYCLEITEMGROUPTMP_OFFSET))(this, a1);
		}

		::System::Void RecycleItemTmp(::SuperScrollView::LoopGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_RECYCLEITEMTMP_OFFSET))(this, a1);
		}

		::System::Void RefreshViewportAndContentPivotAndAnchor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHVIEWPORTANDCONTENTPIVOTANDANCHOR_OFFSET))(this);
		}

		::System::Void ForceAdjustItemPivotAndAnchor(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_FORCEADJUSTITEMPIVOTANDANCHOR_OFFSET))(this, a1);
		}

		::System::Void AdjustViewPortPivot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTVIEWPORTPIVOT_OFFSET))(this);
		}

		::System::Void AdjustContainerAnchorAndPivot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTCONTAINERANCHORANDPIVOT_OFFSET))(this);
		}

		::System::Void AdjustItemAnchorAndPivot(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTITEMANCHORANDPIVOT_OFFSET))(this, a1);
		}

		::System::Void InitItemPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_INITITEMPOOL_OFFSET))(this);
		}

		::System::Void adjustObjectInstance(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTOBJECTINSTANCE_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* GetNewItemByRowColumn(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETNEWITEMBYROWCOLUMN_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::RowColumnPair GetCeilItemRowColumnAtGivenAbsPos(::System::Single a1, ::System::Single a2)
		{
			return ((::SuperScrollView::RowColumnPair(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETCEILITEMROWCOLUMNATGIVENABSPOS_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATE_OFFSET))(this);
		}

		::SuperScrollView::GridItemGroup* CreateItemGroup(::System::Int32 a1)
		{
			return ((::SuperScrollView::GridItemGroup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_CREATEITEMGROUP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetContainerMovedDistance()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETCONTAINERMOVEDDISTANCE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetContainerVaildPos(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETCONTAINERVAILDPOS_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateCurFrameItemRangeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECURFRAMEITEMRANGEDATA_OFFSET))(this);
		}

		::System::Void UpdateRowItemGroupForRecycleAndNew(::SuperScrollView::GridItemGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::GridItemGroup*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEROWITEMGROUPFORRECYCLEANDNEW_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* AsyncUpdateRowItemGroupForRecycleAndNew(::SuperScrollView::GridItemGroup* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::SuperScrollView::GridItemGroup*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCUPDATEROWITEMGROUPFORRECYCLEANDNEW_OFFSET))(this, a1);
		}

		::System::Void UpdateColumnItemGroupForRecycleAndNew(::SuperScrollView::GridItemGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::GridItemGroup*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECOLUMNITEMGROUPFORRECYCLEANDNEW_OFFSET))(this, a1);
		}

		::System::Void SetScrollbarListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SETSCROLLBARLISTENER_OFFSET))(this);
		}

		::System::Void OnPointerDownInScrollBar(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONPOINTERDOWNINSCROLLBAR_OFFSET))(this, a1);
		}

		::System::Void OnPointerUpInScrollBar(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONPOINTERUPINSCROLLBAR_OFFSET))(this, a1);
		}

		::SuperScrollView::RowColumnPair FindNearestItemWithLocalPos(::System::Single a1, ::System::Single a2)
		{
			return ((::SuperScrollView::RowColumnPair(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_FINDNEARESTITEMWITHLOCALPOS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 GetItemSnapPivotLocalPos(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMSNAPPIVOTLOCALPOS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 GetViewPortSnapPivotLocalPos(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETVIEWPORTSNAPPIVOTLOCALPOS_OFFSET))(this, a1);
		}

		::System::Void UpdateNearestSnapItem(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATENEARESTSNAPITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateFromSettingParam(::SuperScrollView::LoopGridViewSettingParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewSettingParam*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEFROMSETTINGPARAM_OFFSET))(this, a1);
		}

		::System::Void FinishSnapImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_FINISHSNAPIMMEDIATELY_OFFSET))(this);
		}

		::System::Void UpdateSnapMove(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATESNAPMOVE_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::GridItemGroup* GetShownGroup(::System::Int32 a1)
		{
			return ((::SuperScrollView::GridItemGroup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETSHOWNGROUP_OFFSET))(this, a1);
		}

		::System::Void FillCurSnapData(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_FILLCURSNAPDATA_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateCurSnapData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECURSNAPDATA_OFFSET))(this);
		}

		::System::Boolean CanSnap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_CANSNAP_OFFSET))(this);
		}

		::SuperScrollView::GridItemGroup* GetOneItemGroupObj()
		{
			return ((::SuperScrollView::GridItemGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETONEITEMGROUPOBJ_OFFSET))(this);
		}

		::System::Void RecycleOneItemGroupObj(::SuperScrollView::GridItemGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::GridItemGroup*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_RECYCLEONEITEMGROUPOBJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::SuperScrollView::GridItemGroup*>* get_ItemGroupList()
		{
			return ((::System::Collections::Generic::List_1<::SuperScrollView::GridItemGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMGROUPLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::SuperScrollView::GridItemPool*>* get_ItemPoolList()
		{
			return ((::System::Collections::Generic::List_1<::SuperScrollView::GridItemPool*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMPOOLLIST_OFFSET))(this);
		}

		::SuperScrollView::LoopGridViewItem* NewListViewItem_1(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_NEWLISTVIEWITEM_1_OFFSET))(this, a1);
		}

		::System::Void SafeInitGridView(::System::Int32 a1, ::System::Func_6<::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32, ::SuperScrollView::LoopGridViewItem*>* a2, ::SuperScrollView::LoopGridViewSettingParam* a3, ::SuperScrollView::LoopGridViewInitParam* a4, ::XLua::LuaTable* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_6<::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32, ::SuperScrollView::LoopGridViewItem*>*, ::SuperScrollView::LoopGridViewSettingParam*, ::SuperScrollView::LoopGridViewInitParam*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SAFEINITGRIDVIEW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ChangeOnGetItemByRowColumn(::System::Func_6<::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32, ::SuperScrollView::LoopGridViewItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_6<::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32, ::SuperScrollView::LoopGridViewItem*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__CHANGEONGETITEMBYROWCOLUMN_OFFSET))(this, a1);
		}

		::System::Void _ChangeTable(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__CHANGETABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFlexibleCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISFLEXIBLECOUNT_OFFSET))(this);
		}

		::System::Void set_IsFlexibleCount(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISFLEXIBLECOUNT_OFFSET))(this, a1);
		}

		::System::Void _UpdateFlexibleFixedCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__UPDATEFLEXIBLEFIXEDCOUNT_OFFSET))(this);
		}

		::System::Single get_FadeInOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_FADEINOFFSET_OFFSET))(this);
		}

		::System::Void set_FadeInOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_FADEINOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_FadeInLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_FADEINLENGTH_OFFSET))(this);
		}

		::System::Void set_FadeInLength(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_FADEINLENGTH_OFFSET))(this, a1);
		}

		::System::Void ClearFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARFADEIN_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_PLAYFADEIN_OFFSET))(this, a1);
		}

		::System::Void _TickFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__TICKFADEIN_OFFSET))(this);
		}

		::System::Boolean get_IsAutoFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISAUTOFADEIN_OFFSET))(this);
		}

		::System::Void set_IsAutoFadeIn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISAUTOFADEIN_OFFSET))(this, a1);
		}

		::System::Boolean get_isNeedFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISNEEDFADEIN_OFFSET))(this);
		}

		::System::Void set_isNeedFadeIn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISNEEDFADEIN_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Boolean get_AutoAdaptItemSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_AUTOADAPTITEMSIZE_OFFSET))(this);
		}

		::System::Void set_AutoAdaptItemSize(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_AUTOADAPTITEMSIZE_OFFSET))(this, a1);
		}

		::System::Void RefreshAllItemSizeOnScreenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHALLITEMSIZEONSCREENCHANGED_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Boolean OnItemRecycle(::SuperScrollView::LoopGridViewItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONITEMRECYCLE_OFFSET))(this, a1);
		}

		::System::Void ClearFocusCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARFOCUSCACHE_OFFSET))(this);
		}

		::System::Void OnAnimatorButtonSelected(::RPG::Client::AnimatorButton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONANIMATORBUTTONSELECTED_OFFSET))(this, a1);
		}

		::System::Void OnItemNew(::SuperScrollView::LoopGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONITEMNEW_OFFSET))(this, a1);
		}

		::System::Void AsyncPrepareItemCount(::System::Int32 a1, ::System::Int32 a2, ::System::Action_1<::XLua::LuaTable*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCPREPAREITEMCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PrepareInstanceItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_PREPAREINSTANCEITEM_OFFSET))(this);
		}

		::System::Void AsyncSetListItemCount(::System::Int32 a1, ::System::Boolean a2, ::System::Action_1<::XLua::LuaTable*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCSETLISTITEMCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnSetListItemFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONSETLISTITEMFINISH_OFFSET))(this);
		}

		::System::Void finishSetFinishCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_FINISHSETFINISHCOROUTINE_OFFSET))(this);
		}

		::System::Boolean get_InAsyncSetItemCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_INASYNCSETITEMCOUNT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void CLearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARALL_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_DESPAWNED_OFFSET))(this);
		}

		::System::Int32 get_ItemPreviewCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMPREVIEWCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemPreviewCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMPREVIEWCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsIgnoreTransDirtyWait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISIGNORETRANSDIRTYWAIT_OFFSET))(this);
		}

		::System::Void set_IsIgnoreTransDirtyWait(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISIGNORETRANSDIRTYWAIT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNaviToNextLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISNAVITONEXTLINE_OFFSET))(this);
		}

		::System::Void set_IsNaviToNextLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISNAVITONEXTLINE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPCPlatformSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISPCPLATFORMSIZE_OFFSET))(this);
		}

		::System::Void set_IsPCPlatformSize(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISPCPLATFORMSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_MItemSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_MITEMSIZE_OFFSET))(this);
		}

		::System::Void set_MItemSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_MITEMSIZE_OFFSET))(this, a1);
		}

		::System::Boolean IsRepeatUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ISREPEATUPDATE_OFFSET))(this);
		}

		::System::Void MarkNextFrameRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_MARKNEXTFRAMEREFRESH_OFFSET))(this);
		}

		::System::Boolean IsInIgroreRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ISINIGROREREFRESH_OFFSET))(this);
		}

		::System::Void RefreshDirtyCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHDIRTYCHECK_OFFSET))(this);
		}

		::System::Boolean IsItemWithinViewport(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ISITEMWITHINVIEWPORT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsItemOutOfViewPort(::SuperScrollView::LoopGridViewItem* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ISITEMOUTOFVIEWPORT_OFFSET))(this, a1, a2);
		}
	};
}

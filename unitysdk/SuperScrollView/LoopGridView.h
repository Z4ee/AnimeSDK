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

#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTCONTAINERANCHORANDPIVOT_OFFSET UNITYSDK_OFFSET(0xABF0FC0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTITEMANCHORANDPIVOT_OFFSET UNITYSDK_OFFSET(0xABF1180)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTOBJECTINSTANCE_OFFSET UNITYSDK_OFFSET(0xABF1780)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTVIEWPORTPIVOT_OFFSET UNITYSDK_OFFSET(0xABF0EE0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCPREPAREITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xABF8C80)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCSETLISTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xABF8D40)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCUPDATEGRIDVIEWCONTENT_OFFSET UNITYSDK_OFFSET(0xABEFEB0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCUPDATEROWITEMGROUPFORRECYCLEANDNEW_OFFSET UNITYSDK_OFFSET(0xABF4AB0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_CANSNAP_OFFSET UNITYSDK_OFFSET(0xABF6A40)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARALLTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0xABED510)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARALL_OFFSET UNITYSDK_OFFSET(0xABF9430)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARFADEIN_OFFSET UNITYSDK_OFFSET(0xABF7830)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARFOCUSCACHE_OFFSET UNITYSDK_OFFSET(0xABF8520)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARSNAPDATA_OFFSET UNITYSDK_OFFSET(0xABEECB0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_CREATEITEMGROUP_OFFSET UNITYSDK_OFFSET(0xABF3BD0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xABF9830)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_FILLCURSNAPDATA_OFFSET UNITYSDK_OFFSET(0xABF6F50)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_FINDNEARESTITEMWITHLOCALPOS_OFFSET UNITYSDK_OFFSET(0xABF5530)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_FINISHSETFINISHCOROUTINE_OFFSET UNITYSDK_OFFSET(0xABF91F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_FINISHSNAPIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xABF69F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_FORCEADJUSTITEMPIVOTANDANCHOR_OFFSET UNITYSDK_OFFSET(0xABF1130)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_FORCESNAPUPDATECHECK_OFFSET UNITYSDK_OFFSET(0xABEEDC0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_FORCETOCHECKCONTENTPOS_OFFSET UNITYSDK_OFFSET(0xABED360)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETCEILITEMROWCOLUMNATGIVENABSPOS_OFFSET UNITYSDK_OFFSET(0xABF2C70)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETCONTAINERMOVEDDISTANCE_OFFSET UNITYSDK_OFFSET(0xABF3CE0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETCONTAINERVAILDPOS_OFFSET UNITYSDK_OFFSET(0xABF3E10)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMABSPOS_OFFSET UNITYSDK_OFFSET(0xABEF430)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMINDEXBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0xABEF3C0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMPOS_OFFSET UNITYSDK_OFFSET(0xABEEF10)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMPREFABCONFDATA_OFFSET UNITYSDK_OFFSET(0xABEC8A0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMSNAPPIVOTLOCALPOS_OFFSET UNITYSDK_OFFSET(0xABF5790)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETNEWITEMBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0xABF1850)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETONEITEMGROUPOBJ_OFFSET UNITYSDK_OFFSET(0xABF3C30)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETROWCOLUMNBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0xABEE8C0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETSHOWNGROUP_OFFSET UNITYSDK_OFFSET(0xABF6EA0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0xABEF4C0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETSHOWNITEMBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0xABEF5A0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GETVIEWPORTSNAPPIVOTLOCALPOS_OFFSET UNITYSDK_OFFSET(0xABF5EA0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ARRANGETYPE_OFFSET UNITYSDK_OFFSET(0xABEC0F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_AUTOADAPTITEMSIZE_OFFSET UNITYSDK_OFFSET(0xABF8290)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_CONTAINERTRANS_OFFSET UNITYSDK_OFFSET(0xABEC130)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_CURSNAPNEARESTITEMROWCOLUMN_OFFSET UNITYSDK_OFFSET(0xABEEDB0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_FADEINLENGTH_OFFSET UNITYSDK_OFFSET(0xABF7810)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_FADEINOFFSET_OFFSET UNITYSDK_OFFSET(0xABF77F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_INASYNCSETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xABF93D0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISAUTOFADEIN_OFFSET UNITYSDK_OFFSET(0xABF81E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISDRAGING_OFFSET UNITYSDK_OFFSET(0xABEC230)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISFLEXIBLECOUNT_OFFSET UNITYSDK_OFFSET(0xABF77D0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISIGNORETRANSDIRTYWAIT_OFFSET UNITYSDK_OFFSET(0xABF98F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISNAVITONEXTLINE_OFFSET UNITYSDK_OFFSET(0xABF9910)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISNEEDFADEIN_OFFSET UNITYSDK_OFFSET(0xABF8200)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISPCPLATFORMSIZE_OFFSET UNITYSDK_OFFSET(0xABF9930)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMGROUPLIST_OFFSET UNITYSDK_OFFSET(0xABF71F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMPADDING_OFFSET UNITYSDK_OFFSET(0xABEC580)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMPOOLLIST_OFFSET UNITYSDK_OFFSET(0xABF7200)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMPREFABDATALIST_OFFSET UNITYSDK_OFFSET(0xABEC110)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMPREVIEWCOUNT_OFFSET UNITYSDK_OFFSET(0xABF9880)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMSIZEWITHPADDING_OFFSET UNITYSDK_OFFSET(0xABEC720)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMSIZE_OFFSET UNITYSDK_OFFSET(0xABEC260)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMSNAPENABLE_OFFSET UNITYSDK_OFFSET(0xABEC240)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xABEC120)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_MITEMSIZE_OFFSET UNITYSDK_OFFSET(0xABF5E20)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_PADDING_OFFSET UNITYSDK_OFFSET(0xABEC730)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_SCROLLRECT_OFFSET UNITYSDK_OFFSET(0xABEC220)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_VIEWPORTHEIGHT_OFFSET UNITYSDK_OFFSET(0xABEC1B0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_VIEWPORTWIDTH_OFFSET UNITYSDK_OFFSET(0xABEC140)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_INITGRIDVIEW_OFFSET UNITYSDK_OFFSET(0xABECA10)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_INITITEMPOOL_OFFSET UNITYSDK_OFFSET(0xABF12F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ISCONTAINERTRANSCANMOVE_OFFSET UNITYSDK_OFFSET(0xABEFFF0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ISINIGROREREFRESH_OFFSET UNITYSDK_OFFSET(0xABF9A00)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ISITEMOUTOFVIEWPORT_OFFSET UNITYSDK_OFFSET(0xABF9AE0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ISITEMWITHINVIEWPORT_OFFSET UNITYSDK_OFFSET(0xABF9A50)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ISREPEATUPDATE_OFFSET UNITYSDK_OFFSET(0xABF9950)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_MARKNEXTFRAMEREFRESH_OFFSET UNITYSDK_OFFSET(0xABF99B0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_MOVEPANELTOITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0xABEEE20)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_MOVEPANELTOITEMBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0xABED730)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_NEWLISTVIEWITEM_1_OFFSET UNITYSDK_OFFSET(0xABF7210)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_NEWLISTVIEWITEM_OFFSET UNITYSDK_OFFSET(0xABEE4C0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONANIMATORBUTTONSELECTED_OFFSET UNITYSDK_OFFSET(0xABF8590)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xABEF190)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xABF93E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONDRAG_OFFSET UNITYSDK_OFFSET(0xABEF340)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xABF8220)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xABEF270)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONITEMNEW_OFFSET UNITYSDK_OFFSET(0xABF1CA0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xABF0500)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONPOINTERDOWNINSCROLLBAR_OFFSET UNITYSDK_OFFSET(0xABF53C0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONPOINTERUPINSCROLLBAR_OFFSET UNITYSDK_OFFSET(0xABF54A0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xABF82B0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ONSETLISTITEMFINISH_OFFSET UNITYSDK_OFFSET(0xABF92B0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xABF7C00)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_PREPAREINSTANCEITEM_OFFSET UNITYSDK_OFFSET(0xABF3A80)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_RECYCLEALLITEM_OFFSET UNITYSDK_OFFSET(0xABED3C0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_RECYCLEITEMGROUPTMP_OFFSET UNITYSDK_OFFSET(0xABF01B0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_RECYCLEITEMTMP_OFFSET UNITYSDK_OFFSET(0xABF0360)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_RECYCLEONEITEMGROUPOBJ_OFFSET UNITYSDK_OFFSET(0xABF0490)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHALLITEMSIZEONSCREENCHANGED_OFFSET UNITYSDK_OFFSET(0xABF3180)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHALLSHOWNITEM_OFFSET UNITYSDK_OFFSET(0xABEF060)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHDIRTYCHECK_OFFSET UNITYSDK_OFFSET(0xABF3110)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0xABEE7E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHITEMBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0xABEE940)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHVIEWPORTANDCONTENTPIVOTANDANCHOR_OFFSET UNITYSDK_OFFSET(0xABF0E90)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SAFEINITGRIDVIEW_OFFSET UNITYSDK_OFFSET(0xABF75E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SETGRIDFIXEDGROUPCOUNT_OFFSET UNITYSDK_OFFSET(0xABEFCE0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SETITEMPADDING_OFFSET UNITYSDK_OFFSET(0xABEC5E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SETITEMSIZE_OFFSET UNITYSDK_OFFSET(0xABEC360)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SETLISTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xABECFA0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SETPADDING_OFFSET UNITYSDK_OFFSET(0xABEC790)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SETSCROLLBARLISTENER_OFFSET UNITYSDK_OFFSET(0xABF50F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SETSNAPTARGETITEMROWCOLUMN_OFFSET UNITYSDK_OFFSET(0xABEED30)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ARRANGETYPE_OFFSET UNITYSDK_OFFSET(0xABEC100)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_AUTOADAPTITEMSIZE_OFFSET UNITYSDK_OFFSET(0xABF82A0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_FADEINLENGTH_OFFSET UNITYSDK_OFFSET(0xABF7820)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_FADEINOFFSET_OFFSET UNITYSDK_OFFSET(0xABF7800)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISAUTOFADEIN_OFFSET UNITYSDK_OFFSET(0xABF81F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISFLEXIBLECOUNT_OFFSET UNITYSDK_OFFSET(0xABF77E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISIGNORETRANSDIRTYWAIT_OFFSET UNITYSDK_OFFSET(0xABF9900)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISNAVITONEXTLINE_OFFSET UNITYSDK_OFFSET(0xABF9920)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISNEEDFADEIN_OFFSET UNITYSDK_OFFSET(0xABF8210)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISPCPLATFORMSIZE_OFFSET UNITYSDK_OFFSET(0xABF9940)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMPADDING_OFFSET UNITYSDK_OFFSET(0xABEC590)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMPREVIEWCOUNT_OFFSET UNITYSDK_OFFSET(0xABF9890)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMSIZE_OFFSET UNITYSDK_OFFSET(0xABEC310)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMSNAPENABLE_OFFSET UNITYSDK_OFFSET(0xABEC250)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_MITEMSIZE_OFFSET UNITYSDK_OFFSET(0xABF6960)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_PADDING_OFFSET UNITYSDK_OFFSET(0xABEC740)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SPAWNED_OFFSET UNITYSDK_OFFSET(0xABF97F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEALLGRIDSETTING_OFFSET UNITYSDK_OFFSET(0xABECE00)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECOLUMNITEMGROUPFORRECYCLEANDNEW_OFFSET UNITYSDK_OFFSET(0xABF4B50)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECOLUMNROWCOUNT_OFFSET UNITYSDK_OFFSET(0xABEFF40)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECONTENTSIZE_OFFSET UNITYSDK_OFFSET(0xABED1E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECURFRAMEITEMRANGEDATA_OFFSET UNITYSDK_OFFSET(0xABF4110)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECURSNAPDATA_OFFSET UNITYSDK_OFFSET(0xABF6BD0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEFROMSETTINGPARAM_OFFSET UNITYSDK_OFFSET(0xABF6680)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEGRIDVIEWCONTENT_OFFSET UNITYSDK_OFFSET(0xABEDC30)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEITEMSIZE_OFFSET UNITYSDK_OFFSET(0xABEF990)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATENEARESTSNAPITEM_OFFSET UNITYSDK_OFFSET(0xABF63A0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEROWITEMGROUPFORRECYCLEANDNEW_OFFSET UNITYSDK_OFFSET(0xABF4500)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATESNAPMOVE_OFFSET UNITYSDK_OFFSET(0xABF34F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATESTARTENDPADDING_OFFSET UNITYSDK_OFFSET(0xABEF6F0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xABF2D90)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_VAILDANDSETCONTAINERPOS_OFFSET UNITYSDK_OFFSET(0xABED600)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__CHANGEONGETITEMBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0xABF7730)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__CHANGETABLE_OFFSET UNITYSDK_OFFSET(0xABF7780)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xABFA130)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__TICKFADEIN_OFFSET UNITYSDK_OFFSET(0xABF3930)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__UPDATEFLEXIBLEFIXEDCOUNT_OFFSET UNITYSDK_OFFSET(0xABF2F90)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopGridView_TypeDefinitionIndex = 38515;

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

		::System::Void set_ArrangeType(::SuperScrollView::GridItemArrangeType value)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::GridItemArrangeType))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ARRANGETYPE_OFFSET))(this, value);
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

		::System::Void set_ItemSnapEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMSNAPENABLE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_ItemSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMSIZE_OFFSET))(this);
		}

		::System::Void set_ItemSize(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMSIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_ItemPadding()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMPADDING_OFFSET))(this);
		}

		::System::Void set_ItemPadding(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMPADDING_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_ItemSizeWithPadding()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMSIZEWITHPADDING_OFFSET))(this);
		}

		::UnityEngine::RectOffset* get_Padding()
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_Padding(::UnityEngine::RectOffset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_PADDING_OFFSET))(this, value);
		}

		::SuperScrollView::GridViewItemPrefabConfData* GetItemPrefabConfData(::System::String* prefabName)
		{
			return ((::SuperScrollView::GridViewItemPrefabConfData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMPREFABCONFDATA_OFFSET))(this, prefabName);
		}

		::System::Void InitGridView(::System::Int32 itemTotalCount, ::System::Func_6<::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32, ::SuperScrollView::LoopGridViewItem*>* onGetItemByRowColumn, ::SuperScrollView::LoopGridViewSettingParam* settingParam, ::SuperScrollView::LoopGridViewInitParam* initParam, ::XLua::LuaTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_6<::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32, ::SuperScrollView::LoopGridViewItem*>*, ::SuperScrollView::LoopGridViewSettingParam*, ::SuperScrollView::LoopGridViewInitParam*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_INITGRIDVIEW_OFFSET))(this, itemTotalCount, onGetItemByRowColumn, settingParam, initParam, table);
		}

		::System::Void SetListItemCount(::System::Int32 itemCount, ::System::Boolean resetPos, ::System::Boolean isRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SETLISTITEMCOUNT_OFFSET))(this, itemCount, resetPos, isRefresh);
		}

		::SuperScrollView::LoopGridViewItem* NewListViewItem(::System::String* itemPrefabName)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_NEWLISTVIEWITEM_OFFSET))(this, itemPrefabName);
		}

		::System::Void RefreshItemByItemIndex(::System::Int32 itemIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHITEMBYITEMINDEX_OFFSET))(this, itemIndex);
		}

		::System::Void RefreshItemByRowColumn(::System::Int32 row, ::System::Int32 column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHITEMBYROWCOLUMN_OFFSET))(this, row, column);
		}

		::System::Void ClearSnapData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARSNAPDATA_OFFSET))(this);
		}

		::System::Void SetSnapTargetItemRowColumn(::System::Int32 row, ::System::Int32 column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SETSNAPTARGETITEMROWCOLUMN_OFFSET))(this, row, column);
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

		::System::Void MovePanelToItemByIndex(::System::Int32 itemIndex, ::System::Single offsetX, ::System::Single offsetY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_MOVEPANELTOITEMBYINDEX_OFFSET))(this, itemIndex, offsetX, offsetY);
		}

		::System::Void MovePanelToItemByRowColumn(::System::Int32 row, ::System::Int32 column, ::System::Single offsetX, ::System::Single offsetY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_MOVEPANELTOITEMBYROWCOLUMN_OFFSET))(this, row, column, offsetX, offsetY);
		}

		::System::Void RefreshAllShownItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHALLSHOWNITEM_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Int32 GetItemIndexByRowColumn(::System::Int32 row, ::System::Int32 column)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMINDEXBYROWCOLUMN_OFFSET))(this, row, column);
		}

		::SuperScrollView::RowColumnPair GetRowColumnByItemIndex(::System::Int32 itemIndex)
		{
			return ((::SuperScrollView::RowColumnPair(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETROWCOLUMNBYITEMINDEX_OFFSET))(this, itemIndex);
		}

		::UnityEngine::Vector2 GetItemAbsPos(::System::Int32 row, ::System::Int32 column)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMABSPOS_OFFSET))(this, row, column);
		}

		::UnityEngine::Vector2 GetItemPos(::System::Int32 row, ::System::Int32 column)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMPOS_OFFSET))(this, row, column);
		}

		::SuperScrollView::LoopGridViewItem* GetShownItemByItemIndex(::System::Int32 itemIndex)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET))(this, itemIndex);
		}

		::SuperScrollView::LoopGridViewItem* GetShownItemByRowColumn(::System::Int32 row, ::System::Int32 column)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETSHOWNITEMBYROWCOLUMN_OFFSET))(this, row, column);
		}

		::System::Void UpdateAllGridSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEALLGRIDSETTING_OFFSET))(this);
		}

		::System::Void SetGridFixedGroupCount(::SuperScrollView::GridFixedType fixedType, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::GridFixedType, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SETGRIDFIXEDGROUPCOUNT_OFFSET))(this, fixedType, count);
		}

		::System::Void SetItemSize(::UnityEngine::Vector2 newSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SETITEMSIZE_OFFSET))(this, newSize);
		}

		::System::Void SetItemPadding(::UnityEngine::Vector2 newPadding)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SETITEMPADDING_OFFSET))(this, newPadding);
		}

		::System::Void SetPadding(::UnityEngine::RectOffset* newPadding)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SETPADDING_OFFSET))(this, newPadding);
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

		::System::Void UpdateGridViewContent(::System::Boolean recordFrame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEGRIDVIEWCONTENT_OFFSET))(this, recordFrame);
		}

		::System::Collections::IEnumerator* AsyncUpdateGridViewContent(::System::Action* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCUPDATEGRIDVIEWCONTENT_OFFSET))(this, callback);
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

		::System::Void RecycleItemGroupTmp(::SuperScrollView::GridItemGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::GridItemGroup*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_RECYCLEITEMGROUPTMP_OFFSET))(this, group);
		}

		::System::Void RecycleItemTmp(::SuperScrollView::LoopGridViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_RECYCLEITEMTMP_OFFSET))(this, item);
		}

		::System::Void RefreshViewportAndContentPivotAndAnchor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHVIEWPORTANDCONTENTPIVOTANDANCHOR_OFFSET))(this);
		}

		::System::Void ForceAdjustItemPivotAndAnchor(::UnityEngine::RectTransform* rtf)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_FORCEADJUSTITEMPIVOTANDANCHOR_OFFSET))(this, rtf);
		}

		::System::Void AdjustViewPortPivot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTVIEWPORTPIVOT_OFFSET))(this);
		}

		::System::Void AdjustContainerAnchorAndPivot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTCONTAINERANCHORANDPIVOT_OFFSET))(this);
		}

		::System::Void AdjustItemAnchorAndPivot(::UnityEngine::RectTransform* rtf)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTITEMANCHORANDPIVOT_OFFSET))(this, rtf);
		}

		::System::Void InitItemPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_INITITEMPOOL_OFFSET))(this);
		}

		::System::Void adjustObjectInstance(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ADJUSTOBJECTINSTANCE_OFFSET))(this, obj);
		}

		::SuperScrollView::LoopGridViewItem* GetNewItemByRowColumn(::System::Int32 row, ::System::Int32 column)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETNEWITEMBYROWCOLUMN_OFFSET))(this, row, column);
		}

		::SuperScrollView::RowColumnPair GetCeilItemRowColumnAtGivenAbsPos(::System::Single ax, ::System::Single ay)
		{
			return ((::SuperScrollView::RowColumnPair(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETCEILITEMROWCOLUMNATGIVENABSPOS_OFFSET))(this, ax, ay);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATE_OFFSET))(this);
		}

		::SuperScrollView::GridItemGroup* CreateItemGroup(::System::Int32 groupIndex)
		{
			return ((::SuperScrollView::GridItemGroup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_CREATEITEMGROUP_OFFSET))(this, groupIndex);
		}

		::UnityEngine::Vector2 GetContainerMovedDistance()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETCONTAINERMOVEDDISTANCE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetContainerVaildPos(::System::Single curX, ::System::Single curY)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETCONTAINERVAILDPOS_OFFSET))(this, curX, curY);
		}

		::System::Void UpdateCurFrameItemRangeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECURFRAMEITEMRANGEDATA_OFFSET))(this);
		}

		::System::Void UpdateRowItemGroupForRecycleAndNew(::SuperScrollView::GridItemGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::GridItemGroup*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEROWITEMGROUPFORRECYCLEANDNEW_OFFSET))(this, group);
		}

		::System::Collections::IEnumerator* AsyncUpdateRowItemGroupForRecycleAndNew(::SuperScrollView::GridItemGroup* group)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::SuperScrollView::GridItemGroup*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCUPDATEROWITEMGROUPFORRECYCLEANDNEW_OFFSET))(this, group);
		}

		::System::Void UpdateColumnItemGroupForRecycleAndNew(::SuperScrollView::GridItemGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::GridItemGroup*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATECOLUMNITEMGROUPFORRECYCLEANDNEW_OFFSET))(this, group);
		}

		::System::Void SetScrollbarListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SETSCROLLBARLISTENER_OFFSET))(this);
		}

		::System::Void OnPointerDownInScrollBar(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONPOINTERDOWNINSCROLLBAR_OFFSET))(this, obj);
		}

		::System::Void OnPointerUpInScrollBar(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONPOINTERUPINSCROLLBAR_OFFSET))(this, obj);
		}

		::SuperScrollView::RowColumnPair FindNearestItemWithLocalPos(::System::Single x, ::System::Single y)
		{
			return ((::SuperScrollView::RowColumnPair(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_FINDNEARESTITEMWITHLOCALPOS_OFFSET))(this, x, y);
		}

		::UnityEngine::Vector2 GetItemSnapPivotLocalPos(::System::Int32 row, ::System::Int32 column)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETITEMSNAPPIVOTLOCALPOS_OFFSET))(this, row, column);
		}

		::UnityEngine::Vector2 GetViewPortSnapPivotLocalPos(::UnityEngine::Vector2 pos)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETVIEWPORTSNAPPIVOTLOCALPOS_OFFSET))(this, pos);
		}

		::System::Void UpdateNearestSnapItem(::System::Boolean forceSendEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATENEARESTSNAPITEM_OFFSET))(this, forceSendEvent);
		}

		::System::Void UpdateFromSettingParam(::SuperScrollView::LoopGridViewSettingParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewSettingParam*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATEFROMSETTINGPARAM_OFFSET))(this, param);
		}

		::System::Void FinishSnapImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_FINISHSNAPIMMEDIATELY_OFFSET))(this);
		}

		::System::Void UpdateSnapMove(::System::Boolean immediate, ::System::Boolean forceSendEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_UPDATESNAPMOVE_OFFSET))(this, immediate, forceSendEvent);
		}

		::SuperScrollView::GridItemGroup* GetShownGroup(::System::Int32 groupIndex)
		{
			return ((::SuperScrollView::GridItemGroup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GETSHOWNGROUP_OFFSET))(this, groupIndex);
		}

		::System::Void FillCurSnapData(::System::Int32 row, ::System::Int32 column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_FILLCURSNAPDATA_OFFSET))(this, row, column);
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

		::System::Void RecycleOneItemGroupObj(::SuperScrollView::GridItemGroup* obj)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::GridItemGroup*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_RECYCLEONEITEMGROUPOBJ_OFFSET))(this, obj);
		}

		::System::Collections::Generic::List_1<::SuperScrollView::GridItemGroup*>* get_ItemGroupList()
		{
			return ((::System::Collections::Generic::List_1<::SuperScrollView::GridItemGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMGROUPLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::SuperScrollView::GridItemPool*>* get_ItemPoolList()
		{
			return ((::System::Collections::Generic::List_1<::SuperScrollView::GridItemPool*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ITEMPOOLLIST_OFFSET))(this);
		}

		::SuperScrollView::LoopGridViewItem* NewListViewItem_1(::System::Int32 itemPrefabIndex)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_NEWLISTVIEWITEM_1_OFFSET))(this, itemPrefabIndex);
		}

		::System::Void SafeInitGridView(::System::Int32 itemTotalCount, ::System::Func_6<::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32, ::SuperScrollView::LoopGridViewItem*>* onGetItemByRowColumn, ::SuperScrollView::LoopGridViewSettingParam* settingParam, ::SuperScrollView::LoopGridViewInitParam* initParam, ::XLua::LuaTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_6<::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32, ::SuperScrollView::LoopGridViewItem*>*, ::SuperScrollView::LoopGridViewSettingParam*, ::SuperScrollView::LoopGridViewInitParam*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SAFEINITGRIDVIEW_OFFSET))(this, itemTotalCount, onGetItemByRowColumn, settingParam, initParam, table);
		}

		::System::Void _ChangeOnGetItemByRowColumn(::System::Func_6<::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32, ::SuperScrollView::LoopGridViewItem*>* onGetItemByRowColumn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_6<::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32, ::SuperScrollView::LoopGridViewItem*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__CHANGEONGETITEMBYROWCOLUMN_OFFSET))(this, onGetItemByRowColumn);
		}

		::System::Void _ChangeTable(::XLua::LuaTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__CHANGETABLE_OFFSET))(this, table);
		}

		::System::Boolean get_IsFlexibleCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISFLEXIBLECOUNT_OFFSET))(this);
		}

		::System::Void set_IsFlexibleCount(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISFLEXIBLECOUNT_OFFSET))(this, value);
		}

		::System::Void _UpdateFlexibleFixedCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__UPDATEFLEXIBLEFIXEDCOUNT_OFFSET))(this);
		}

		::System::Single get_FadeInOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_FADEINOFFSET_OFFSET))(this);
		}

		::System::Void set_FadeInOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_FADEINOFFSET_OFFSET))(this, value);
		}

		::System::Single get_FadeInLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_FADEINLENGTH_OFFSET))(this);
		}

		::System::Void set_FadeInLength(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_FADEINLENGTH_OFFSET))(this, value);
		}

		::System::Void ClearFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARFADEIN_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_PLAYFADEIN_OFFSET))(this, force);
		}

		::System::Void _TickFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__TICKFADEIN_OFFSET))(this);
		}

		::System::Boolean get_IsAutoFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISAUTOFADEIN_OFFSET))(this);
		}

		::System::Void set_IsAutoFadeIn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISAUTOFADEIN_OFFSET))(this, value);
		}

		::System::Boolean get_isNeedFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISNEEDFADEIN_OFFSET))(this);
		}

		::System::Void set_isNeedFadeIn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISNEEDFADEIN_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Boolean get_AutoAdaptItemSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_AUTOADAPTITEMSIZE_OFFSET))(this);
		}

		::System::Void set_AutoAdaptItemSize(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_AUTOADAPTITEMSIZE_OFFSET))(this, value);
		}

		::System::Void RefreshAllItemSizeOnScreenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_REFRESHALLITEMSIZEONSCREENCHANGED_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Boolean OnItemRecycle(::SuperScrollView::LoopGridViewItem* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONITEMRECYCLE_OFFSET))(this, item);
		}

		::System::Void ClearFocusCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_CLEARFOCUSCACHE_OFFSET))(this);
		}

		::System::Void OnAnimatorButtonSelected(::RPG::Client::AnimatorButton* button)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONANIMATORBUTTONSELECTED_OFFSET))(this, button);
		}

		::System::Void OnItemNew(::SuperScrollView::LoopGridViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ONITEMNEW_OFFSET))(this, item);
		}

		::System::Void AsyncPrepareItemCount(::System::Int32 perFrameCount, ::System::Int32 prefabIndex, ::System::Action_1<::XLua::LuaTable*>* callbackAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCPREPAREITEMCOUNT_OFFSET))(this, perFrameCount, prefabIndex, callbackAction);
		}

		::System::Void PrepareInstanceItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_PREPAREINSTANCEITEM_OFFSET))(this);
		}

		::System::Void AsyncSetListItemCount(::System::Int32 itemCount, ::System::Boolean resetPos, ::System::Action_1<::XLua::LuaTable*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ASYNCSETLISTITEMCOUNT_OFFSET))(this, itemCount, resetPos, callback);
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

		::System::Void set_ItemPreviewCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ITEMPREVIEWCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsIgnoreTransDirtyWait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISIGNORETRANSDIRTYWAIT_OFFSET))(this);
		}

		::System::Void set_IsIgnoreTransDirtyWait(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISIGNORETRANSDIRTYWAIT_OFFSET))(this, value);
		}

		::System::Boolean get_IsNaviToNextLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISNAVITONEXTLINE_OFFSET))(this);
		}

		::System::Void set_IsNaviToNextLine(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISNAVITONEXTLINE_OFFSET))(this, value);
		}

		::System::Boolean get_IsPCPlatformSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_ISPCPLATFORMSIZE_OFFSET))(this);
		}

		::System::Void set_IsPCPlatformSize(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_ISPCPLATFORMSIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_MItemSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_GET_MITEMSIZE_OFFSET))(this);
		}

		::System::Void set_MItemSize(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SET_MITEMSIZE_OFFSET))(this, value);
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

		::System::Boolean IsItemWithinViewport(::System::Int32 index, ::System::Single minRate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ISITEMWITHINVIEWPORT_OFFSET))(this, index, minRate);
		}

		::System::Boolean IsItemOutOfViewPort(::SuperScrollView::LoopGridViewItem* item, ::System::Single visibleRate)
		{
			return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ISITEMOUTOFVIEWPORT_OFFSET))(this, item, visibleRate);
		}
	};
}

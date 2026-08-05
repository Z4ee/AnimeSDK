#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_Data.h"
#include "unitysdk/MonoUITableScrollV2_FeatureState.h"
#include "unitysdk/MonoUITableScrollV2_ScrollToTargetContext.h"
#include "unitysdk/MonoUITableScrollV2_ScrollToTargetContext_ScrollDirection.h"
#include "unitysdk/MonoUITableScrollV2_ScrollToTargetResult.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass43_0.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass49_0.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass52_0.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass52_1.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass57_0.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass58_0.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass59_0.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass62_0.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass63_0.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class MonoUITableScrollV2;
class MonoUITableScrollV2_BaseScrollLogic;
class MonoUITableScrollV2_ScrollParams_AlignParam;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_1_8914B0C55B12E9CE;

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_CALSELECTALIGNTARGETPOSITIONV2_OFFSET UNITYSDK_OFFSET(0x11C3A970)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_CALSELECTALIGNTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x11C38490)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_CHECKSCROLLDATAINDEX_OFFSET UNITYSDK_OFFSET(0x11C34820)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_DEBUGLOG_OFFSET UNITYSDK_OFFSET(0x11C352B0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GETREALALIGNDATAINDEXV2_OFFSET UNITYSDK_OFFSET(0x11C363B0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GETREALALIGNRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11C37590)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_CANNOTMOVERUNTIME_OFFSET UNITYSDK_OFFSET(0x11C32E10)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_DATACOUNT_OFFSET UNITYSDK_OFFSET(0x11C32D30)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_DYNAMICITEMSIZE_OFFSET UNITYSDK_OFFSET(0x11C32DB0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_DYNAMICVIEWRECTSIZE_OFFSET UNITYSDK_OFFSET(0x11C32DD0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_ISDRAGGINGSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x11C32E60)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0x11C32E30)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x11C32F80)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x11C32DF0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_LOOPSCROLL_OFFSET UNITYSDK_OFFSET(0x11C32D70)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_MANUALMODE_OFFSET UNITYSDK_OFFSET(0x11C32F60)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_M_DATAS_OFFSET UNITYSDK_OFFSET(0x11C32F30)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_M_INITED_OFFSET UNITYSDK_OFFSET(0x11C32F10)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_SIMPLEMODE_OFFSET UNITYSDK_OFFSET(0x11C32D90)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_STARTAXISEQUALSCROLLAXIS_OFFSET UNITYSDK_OFFSET(0x11C32FE0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__CURRENTSELECTALIGNTARGETDATAINDEX_OFFSET UNITYSDK_OFFSET(0x11C32C30)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__CURRENTSELECTALIGNTARGETRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11C32CB0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__DATAINDEX_OFFSET UNITYSDK_OFFSET(0x11C33010)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__FEATURESTATE_OFFSET UNITYSDK_OFFSET(0x11C32E90)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__SCROLLDATAINDEX_OFFSET UNITYSDK_OFFSET(0x11C3C950)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__SCROLLFROMDATAINDEX_OFFSET UNITYSDK_OFFSET(0x11C3C990)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__SCROLLTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11C3C970)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ISMOVETOEND_1_OFFSET UNITYSDK_OFFSET(0x11C360D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ISMOVETOEND_OFFSET UNITYSDK_OFFSET(0x11C38A60)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_JUDGEALIGNDATAINDEX_OFFSET UNITYSDK_OFFSET(0x11C364D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONAFTERREFRESHGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x11C33C30)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONCLEARALLITEMDATAS_OFFSET UNITYSDK_OFFSET(0x11C32BD0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONINITDATA_OFFSET UNITYSDK_OFFSET(0x11C32B90)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONSELECTITEMWHENNOTINIT_OFFSET UNITYSDK_OFFSET(0x11C347C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x11C33510)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOSHOWTARGETWITHOUTANIM_OFFSET UNITYSDK_OFFSET(0x11C34D20)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOSHOWTARGET_1_OFFSET UNITYSDK_OFFSET(0x11C34F40)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOSHOWTARGET_OFFSET UNITYSDK_OFFSET(0x11C34C70)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNERWITHOUTALIGNDATAINDEXOFFSET_1_OFFSET UNITYSDK_OFFSET(0x11C37F10)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNERWITHOUTALIGNDATAINDEXOFFSET_OFFSET UNITYSDK_OFFSET(0x11C37BF0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNER_1_OFFSET UNITYSDK_OFFSET(0x11C37230)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNER_2_OFFSET UNITYSDK_OFFSET(0x11C36B70)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNER_OFFSET UNITYSDK_OFFSET(0x11C35840)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x11C33030)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__CURRENTSELECTALIGNTARGETDATAINDEX_OFFSET UNITYSDK_OFFSET(0x11C32C50)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__CURRENTSELECTALIGNTARGETRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11C32CD0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__FEATURESTATE_OFFSET UNITYSDK_OFFSET(0x11C32EB0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__SCROLLDATAINDEX_OFFSET UNITYSDK_OFFSET(0x11C3C960)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__SCROLLFROMDATAINDEX_OFFSET UNITYSDK_OFFSET(0x11C3C9A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__SCROLLTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11C3C980)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALALIGNTARGETPOSITION_CENTER_63_0_OFFSET UNITYSDK_OFFSET(0x11C3B190)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALALIGNTARGETPOSITION_CUSTOMRANGE_63_4_OFFSET UNITYSDK_OFFSET(0x11C3B440)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALALIGNTARGETPOSITION_VISIBLE_63_3_OFFSET UNITYSDK_OFFSET(0x11C3AAD0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALGRIDALIGNTARGETPOSITION_END_63_2_OFFSET UNITYSDK_OFFSET(0x11C3C700)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALGRIDALIGNTARGETPOSITION_START_63_1_OFFSET UNITYSDK_OFFSET(0x11C3C4B0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITION_G__CALALIGNTARGETPOSITION_CENTER_62_0_OFFSET UNITYSDK_OFFSET(0x11C391B0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITION_G__CALALIGNTARGETPOSITION_CUSTOMRANGE_62_4_OFFSET UNITYSDK_OFFSET(0x11C39460)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITION_G__CALALIGNTARGETPOSITION_VISIBLE_62_3_OFFSET UNITYSDK_OFFSET(0x11C38AF0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITION_G__CALGRIDALIGNTARGETPOSITION_END_62_2_OFFSET UNITYSDK_OFFSET(0x11C3A720)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITION_G__CALGRIDALIGNTARGETPOSITION_START_62_1_OFFSET UNITYSDK_OFFSET(0x11C3A4D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CHECKSCROLLDATAINDEX_G__GETSCROLLDIRECTION_47_0_OFFSET UNITYSDK_OFFSET(0x11C34C50)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x11C32B80)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNDATAINDEXV2_G__GETNEXTINDEX_58_1_OFFSET UNITYSDK_OFFSET(0x11C388D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNDATAINDEXV2_G__GETPREVINDEX_58_0_OFFSET UNITYSDK_OFFSET(0x11C38840)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__ISMOVETOENDV2_57_0_OFFSET UNITYSDK_OFFSET(0x11C385D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__SELECTACTIVEGAMEOBJECTBYOFFSET_57_3_OFFSET UNITYSDK_OFFSET(0x11C38740)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__SELECTACTIVEGAMEOBJECTINNER_57_2_OFFSET UNITYSDK_OFFSET(0x11C3CAA0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__SELECTACTIVEGAMEOBJECT_57_1_OFFSET UNITYSDK_OFFSET(0x11C3C9D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__JUDGEALIGNDATAINDEX_G__GETALIGNDATAINDEX_59_0_OFFSET UNITYSDK_OFFSET(0x11C38960)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__JUDGEALIGNDATAINDEX_G__GETALIGNDATAINDEX_59_2_OFFSET UNITYSDK_OFFSET(0x11C38AB0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__JUDGEALIGNDATAINDEX_G__GETSCROLLDISTANCE_59_1_OFFSET UNITYSDK_OFFSET(0x11C3CB50)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOSHOWTARGETWITHOUTANIM_G__GETSCROLLDIRECTION_49_0_OFFSET UNITYSDK_OFFSET(0x11C34F20)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOTARGETINNER_G__GETDISTANCETOVISIBLE_52_1_OFFSET UNITYSDK_OFFSET(0x11C3C9B0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOTARGETINNER_G__GETNEARESTDATAINDEX_52_0_OFFSET UNITYSDK_OFFSET(0x11C36AC0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOTARGET_G__INNER_43_0_OFFSET UNITYSDK_OFFSET(0x11C33300)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET___BASE_ONCLEARALLITEMDATAS_OFFSET UNITYSDK_OFFSET(0x11C3CBE0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET___BASE_ONINITDATA_OFFSET UNITYSDK_OFFSET(0x11C3CC70)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginScrollToTarget_TypeDefinitionIndex = 75073;

class MonoUITableScrollV2_TableScrollPluginScrollToTarget : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::UnityEngine::RectTransform* __scrollTransform_k__BackingField; // 0x18
	::System::Int32 __scrollDataIndex_k__BackingField; // 0x20
	::System::Nullable_1<::System::Int32> __scrollFromDataIndex_k__BackingField; // 0x24
	::System::Boolean _tempParamFor1_0; // 0x2C
	::System::Nullable_1<::System::Boolean> _consoleScrollToEnd; // 0x2D

	::System::Void _ctor(::MonoUITableScrollV2* tableScroll)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CTOR_OFFSET))(this, tableScroll);
	}

	::System::Void OnInitData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONINITDATA_OFFSET))(this);
	}

	::System::Void OnClearAllItemDatas()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONCLEARALLITEMDATAS_OFFSET))(this);
	}

	::System::Int32 get__currentSelectAlignTargetDataIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__CURRENTSELECTALIGNTARGETDATAINDEX_OFFSET))(this);
	}

	::System::Void set__currentSelectAlignTargetDataIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__CURRENTSELECTALIGNTARGETDATAINDEX_OFFSET))(this, value);
	}

	::UnityEngine::RectTransform* get__currentSelectAlignTargetRectTransform()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__CURRENTSELECTALIGNTARGETRECTTRANSFORM_OFFSET))(this);
	}

	::System::Void set__currentSelectAlignTargetRectTransform(::UnityEngine::RectTransform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__CURRENTSELECTALIGNTARGETRECTTRANSFORM_OFFSET))(this, value);
	}

	::System::Int32 get_dataCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_DATACOUNT_OFFSET))(this);
	}

	::System::Boolean get_LoopScroll()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_LOOPSCROLL_OFFSET))(this);
	}

	::System::Boolean get_SimpleMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_SIMPLEMODE_OFFSET))(this);
	}

	::System::Boolean get_DynamicItemSize()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_DYNAMICITEMSIZE_OFFSET))(this);
	}

	::System::Boolean get_DynamicViewRectSize()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_DYNAMICVIEWRECTSIZE_OFFSET))(this);
	}

	::MonoUITableScrollV2_BaseScrollLogic* get_logic()
	{
		return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_LOGIC_OFFSET))(this);
	}

	::System::Boolean get_CanNotMoveRuntime()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_CANNOTMOVERUNTIME_OFFSET))(this);
	}

	::System::Boolean get_isDragging()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_ISDRAGGING_OFFSET))(this);
	}

	::System::Boolean get_isDraggingScrollBar()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_ISDRAGGINGSCROLLBAR_OFFSET))(this);
	}

	::MonoUITableScrollV2_FeatureState get__featureState()
	{
		return ((::MonoUITableScrollV2_FeatureState(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__FEATURESTATE_OFFSET))(this);
	}

	::System::Void set__featureState(::MonoUITableScrollV2_FeatureState value)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_FeatureState))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__FEATURESTATE_OFFSET))(this, value);
	}

	::System::Boolean get_m_inited()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_M_INITED_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MonoUITableScrollV2_Data>* get_m_datas()
	{
		return ((::System::Collections::Generic::List_1<::MonoUITableScrollV2_Data>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_M_DATAS_OFFSET))(this);
	}

	::System::Boolean get_ManualMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_MANUALMODE_OFFSET))(this);
	}

	::System::Int32 get_itemCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_ITEMCOUNT_OFFSET))(this);
	}

	::System::Boolean get_startAxisEqualScrollAxis()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET_STARTAXISEQUALSCROLLAXIS_OFFSET))(this);
	}

	::Class_1_8914B0C55B12E9CE<::System::Int32>* get__dataIndex()
	{
		return ((::Class_1_8914B0C55B12E9CE<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__DATAINDEX_OFFSET))(this);
	}

	::MonoUITableScrollV2_ScrollToTargetResult ScrollToTarget(::MonoUITableScrollV2_ScrollToTargetContext context)
	{
		return ((::MonoUITableScrollV2_ScrollToTargetResult(*)(::PVOID, ::MonoUITableScrollV2_ScrollToTargetContext))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGET_OFFSET))(this, context);
	}

	::MonoUITableScrollV2_ScrollToTargetResult ScrollDelta(::System::Single delta, ::System::Boolean hasAnim)
	{
		return ((::MonoUITableScrollV2_ScrollToTargetResult(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLDELTA_OFFSET))(this, delta, hasAnim);
	}

	::System::Void OnAfterRefreshGameObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONAFTERREFRESHGAMEOBJECT_OFFSET))(this);
	}

	::System::Void OnSelectItemWhenNotInit(::System::Int32 dataIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ONSELECTITEMWHENNOTINIT_OFFSET))(this, dataIndex);
	}

	::System::Void CheckScrollDataIndex()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_CHECKSCROLLDATAINDEX_OFFSET))(this);
	}

	::System::Void ScrollToShowTarget(::System::Int32 dataIndex, ::System::Nullable_1<::System::Boolean> toEnd, ::System::Nullable_1<::System::Int32> fromDataIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOSHOWTARGET_OFFSET))(this, dataIndex, toEnd, fromDataIndex);
	}

	::System::Void ScrollToShowTargetWithoutAnim(::System::Int32 dataIndex, ::System::Nullable_1<::System::Boolean> toEnd, ::System::Nullable_1<::System::Int32> fromDataIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOSHOWTARGETWITHOUTANIM_OFFSET))(this, dataIndex, toEnd, fromDataIndex);
	}

	::System::Void ScrollToShowTarget_1(::UnityEngine::RectTransform* trans)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOSHOWTARGET_1_OFFSET))(this, trans);
	}

	::System::Void DebugLog(::MonoUITableScrollV2_ScrollToTargetContext& context, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam, ::MonoUITableScrollV2_ScrollToTargetResult& scrollToTargetResult)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_ScrollToTargetContext&, ::MonoUITableScrollV2_ScrollParams_AlignParam*, ::MonoUITableScrollV2_ScrollToTargetResult&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_DEBUGLOG_OFFSET))(this, context, alignParam, scrollToTargetResult);
	}

	::System::Void ScrollToTargetInner(::MonoUITableScrollV2_ScrollToTargetContext context, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam, ::MonoUITableScrollV2_ScrollToTargetResult& scrollToTargetResult)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_ScrollToTargetContext, ::MonoUITableScrollV2_ScrollParams_AlignParam*, ::MonoUITableScrollV2_ScrollToTargetResult&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNER_OFFSET))(this, context, alignParam, scrollToTargetResult);
	}

	::System::Void ScrollToTargetInner_1(::UnityEngine::RectTransform* rectTransform, ::System::Boolean withAnim, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam, ::MonoUITableScrollV2_ScrollToTargetResult& scrollToTargetResult)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean, ::MonoUITableScrollV2_ScrollParams_AlignParam*, ::MonoUITableScrollV2_ScrollToTargetResult&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNER_1_OFFSET))(this, rectTransform, withAnim, alignParam, scrollToTargetResult);
	}

	::System::Void ScrollToTargetInnerWithoutAlignDataIndexOffset(::UnityEngine::RectTransform* rectTransform, ::System::Boolean withAnim, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam, ::MonoUITableScrollV2_ScrollToTargetResult& scrollToTargetResult)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean, ::MonoUITableScrollV2_ScrollParams_AlignParam*, ::MonoUITableScrollV2_ScrollToTargetResult&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNERWITHOUTALIGNDATAINDEXOFFSET_OFFSET))(this, rectTransform, withAnim, alignParam, scrollToTargetResult);
	}

	::System::Void ScrollToTargetInnerWithoutAlignDataIndexOffset_1(::MonoUITableScrollV2_ScrollToTargetContext context, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam, ::MonoUITableScrollV2_ScrollToTargetResult& scrollToTargetResult)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_ScrollToTargetContext, ::MonoUITableScrollV2_ScrollParams_AlignParam*, ::MonoUITableScrollV2_ScrollToTargetResult&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNERWITHOUTALIGNDATAINDEXOFFSET_1_OFFSET))(this, context, alignParam, scrollToTargetResult);
	}

	::System::Void ScrollToTargetInner_2(::NAPScrollView::DataStruct::ScrollFloat start, ::NAPScrollView::DataStruct::ScrollFloat end, ::System::Boolean withAnim, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam, ::MonoUITableScrollV2_ScrollToTargetResult& scrollToTargetResult)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Boolean, ::MonoUITableScrollV2_ScrollParams_AlignParam*, ::MonoUITableScrollV2_ScrollToTargetResult&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SCROLLTOTARGETINNER_2_OFFSET))(this, start, end, withAnim, alignParam, scrollToTargetResult);
	}

	::UnityEngine::RectTransform* GetRealAlignRectTransform(::UnityEngine::RectTransform* rectTransform, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam)
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID, ::UnityEngine::RectTransform*, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GETREALALIGNRECTTRANSFORM_OFFSET))(this, rectTransform, alignParam);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> GetRealAlignDataIndexV2(::System::Int32 dataIndex, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GETREALALIGNDATAINDEXV2_OFFSET))(this, dataIndex, alignParam);
	}

	::System::Int32 JudgeAlignDataIndex(::System::Int32 dataIndex, ::System::Int32 prevDataIndex, ::System::Int32 nextDataIndex, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_JUDGEALIGNDATAINDEX_OFFSET))(this, dataIndex, prevDataIndex, nextDataIndex, alignParam);
	}

	::System::Nullable_1<::System::Boolean> IsMoveToEnd(::System::Int32 toIndex)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ISMOVETOEND_OFFSET))(this, toIndex);
	}

	::System::Nullable_1<::System::Boolean> IsMoveToEnd_1(::System::Int32 toIndex, ::System::Nullable_1<::System::Int32> fromIndex)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_ISMOVETOEND_1_OFFSET))(this, toIndex, fromIndex);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> CalSelectAlignTargetPosition(::NAPScrollView::DataStruct::ScrollFloat start, ::NAPScrollView::DataStruct::ScrollFloat end, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_CALSELECTALIGNTARGETPOSITION_OFFSET))(this, start, end, alignParam);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> CalSelectAlignTargetPositionV2(::NAPScrollView::DataStruct::ScrollFloat start, ::NAPScrollView::DataStruct::ScrollFloat end, ::NAPScrollView::DataStruct::ScrollFloat startOffset, ::NAPScrollView::DataStruct::ScrollFloat endOffset, ::MonoUITableScrollV2_ScrollParams_AlignParam* alignParam)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::MonoUITableScrollV2_ScrollParams_AlignParam*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_CALSELECTALIGNTARGETPOSITIONV2_OFFSET))(this, start, end, startOffset, endOffset, alignParam);
	}

	::System::Int32 get__scrollDataIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__SCROLLDATAINDEX_OFFSET))(this);
	}

	::System::Void set__scrollDataIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__SCROLLDATAINDEX_OFFSET))(this, value);
	}

	::UnityEngine::RectTransform* get__scrollTransform()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__SCROLLTRANSFORM_OFFSET))(this);
	}

	::System::Void set__scrollTransform(::UnityEngine::RectTransform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__SCROLLTRANSFORM_OFFSET))(this, value);
	}

	::System::Nullable_1<::System::Int32> get__scrollFromDataIndex()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_GET__SCROLLFROMDATAINDEX_OFFSET))(this);
	}

	::System::Void set__scrollFromDataIndex(::System::Nullable_1<::System::Int32> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET_SET__SCROLLFROMDATAINDEX_OFFSET))(this, value);
	}

	::System::Void _ScrollToTarget_g__Inner_43_0(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass43_0& a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass43_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOTARGET_G__INNER_43_0_OFFSET))(this, a1);
	}

	::MonoUITableScrollV2_ScrollToTargetContext_ScrollDirection _CheckScrollDataIndex_g__GetScrollDirection_47_0()
	{
		return ((::MonoUITableScrollV2_ScrollToTargetContext_ScrollDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CHECKSCROLLDATAINDEX_G__GETSCROLLDIRECTION_47_0_OFFSET))(this);
	}

	static ::MonoUITableScrollV2_ScrollToTargetContext_ScrollDirection _ScrollToShowTargetWithoutAnim_g__GetScrollDirection_49_0(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass49_0& a1)
	{
		return ((::MonoUITableScrollV2_ScrollToTargetContext_ScrollDirection(*)(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass49_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOSHOWTARGETWITHOUTANIM_G__GETSCROLLDIRECTION_49_0_OFFSET))(a1);
	}

	::System::Int32 _ScrollToTargetInner_g__GetNearestDataIndex_52_0(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass52_0& a1, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass52_1& a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass52_0&, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass52_1&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOTARGETINNER_G__GETNEARESTDATAINDEX_52_0_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 _ScrollToTargetInner_g__GetDistanceToVisible_52_1(::System::Int32 dataIndex_inner, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass52_1& a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass52_1&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__SCROLLTOTARGETINNER_G__GETDISTANCETOVISIBLE_52_1_OFFSET))(dataIndex_inner, a2);
	}

	::System::Boolean _GetRealAlignRectTransform_g__IsMoveToEndV2_57_0(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass57_0& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass57_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__ISMOVETOENDV2_57_0_OFFSET))(this, a1);
	}

	::System::Int32 _GetRealAlignRectTransform_g__SelectActiveGameObject_57_1(::System::Int32 _siblingIndex, ::System::Boolean next, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass57_0& a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass57_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__SELECTACTIVEGAMEOBJECT_57_1_OFFSET))(this, _siblingIndex, next, a3);
	}

	::System::Nullable_1<::System::Int32> _GetRealAlignRectTransform_g__SelectActiveGameObjectInner_57_2(::System::Int32 _siblingIndex, ::System::Boolean next, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass57_0& a3)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32, ::System::Boolean, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass57_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__SELECTACTIVEGAMEOBJECTINNER_57_2_OFFSET))(this, _siblingIndex, next, a3);
	}

	::System::Int32 _GetRealAlignRectTransform_g__SelectActiveGameObjectByOffset_57_3(::System::Int32 _siblingIndex, ::System::Int32 offset, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass57_0& a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass57_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNRECTTRANSFORM_G__SELECTACTIVEGAMEOBJECTBYOFFSET_57_3_OFFSET))(this, _siblingIndex, offset, a3);
	}

	::System::Int32 _GetRealAlignDataIndexV2_g__GetPrevIndex_58_0(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass58_0& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass58_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNDATAINDEXV2_G__GETPREVINDEX_58_0_OFFSET))(this, a1);
	}

	::System::Int32 _GetRealAlignDataIndexV2_g__GetNextIndex_58_1(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass58_0& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass58_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__GETREALALIGNDATAINDEXV2_G__GETNEXTINDEX_58_1_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> _JudgeAlignDataIndex_g__GetAlignDataIndex_59_0(::System::Int32 prevDataIndex_inner, ::System::Int32 nextDataIndex_inner, ::System::Int32 start_inner, ::System::Int32 end_inner, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass59_0& a5)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__JUDGEALIGNDATAINDEX_G__GETALIGNDATAINDEX_59_0_OFFSET))(this, prevDataIndex_inner, nextDataIndex_inner, start_inner, end_inner, a5);
	}

	::System::Int32 _JudgeAlignDataIndex_g__GetScrollDistance_59_1(::System::Int32 dataIndex_inner, ::System::Int32 start_inner, ::System::Int32 end_inner, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass59_0& a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__JUDGEALIGNDATAINDEX_G__GETSCROLLDISTANCE_59_1_OFFSET))(this, dataIndex_inner, start_inner, end_inner, a4);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> _JudgeAlignDataIndex_g__GetAlignDataIndex_59_2(::System::Int32 prevDataIndex_inner, ::System::Int32 nextDataIndex_inner, ::System::Int32 center_inner, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass59_0& a4)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass59_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__JUDGEALIGNDATAINDEX_G__GETALIGNDATAINDEX_59_2_OFFSET))(this, prevDataIndex_inner, nextDataIndex_inner, center_inner, a4);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPosition_g__CalAlignTargetPosition_Center_62_0(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass62_0& a1)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass62_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITION_G__CALALIGNTARGETPOSITION_CENTER_62_0_OFFSET))(this, a1);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPosition_g__CalGridAlignTargetPosition_Start_62_1(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass62_0& a1)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass62_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITION_G__CALGRIDALIGNTARGETPOSITION_START_62_1_OFFSET))(this, a1);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPosition_g__CalGridAlignTargetPosition_End_62_2(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass62_0& a1)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass62_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITION_G__CALGRIDALIGNTARGETPOSITION_END_62_2_OFFSET))(this, a1);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPosition_g__CalAlignTargetPosition_Visible_62_3(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass62_0& a1)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass62_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITION_G__CALALIGNTARGETPOSITION_VISIBLE_62_3_OFFSET))(this, a1);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPosition_g__CalAlignTargetPosition_CustomRange_62_4(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass62_0& a1)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass62_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITION_G__CALALIGNTARGETPOSITION_CUSTOMRANGE_62_4_OFFSET))(this, a1);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPositionV2_g__CalAlignTargetPosition_Center_63_0(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass63_0& a1)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass63_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALALIGNTARGETPOSITION_CENTER_63_0_OFFSET))(this, a1);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPositionV2_g__CalGridAlignTargetPosition_Start_63_1(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass63_0& a1)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass63_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALGRIDALIGNTARGETPOSITION_START_63_1_OFFSET))(this, a1);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPositionV2_g__CalGridAlignTargetPosition_End_63_2(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass63_0& a1)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass63_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALGRIDALIGNTARGETPOSITION_END_63_2_OFFSET))(this, a1);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPositionV2_g__CalAlignTargetPosition_Visible_63_3(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass63_0& a1)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass63_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALALIGNTARGETPOSITION_VISIBLE_63_3_OFFSET))(this, a1);
	}

	::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> _CalSelectAlignTargetPositionV2_g__CalAlignTargetPosition_CustomRange_63_4(::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass63_0& a1)
	{
		return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginScrollToTarget___c__DisplayClass63_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET__CALSELECTALIGNTARGETPOSITIONV2_G__CALALIGNTARGETPOSITION_CUSTOMRANGE_63_4_OFFSET))(this, a1);
	}

	::System::Void __base_OnClearAllItemDatas()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET___BASE_ONCLEARALLITEMDATAS_OFFSET))(this);
	}

	::System::Void __base_OnInitData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLTOTARGET___BASE_ONINITDATA_OFFSET))(this);
	}
};

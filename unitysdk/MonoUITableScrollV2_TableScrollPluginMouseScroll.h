#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginMouseScroll_OnScrollState.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginMouseScroll_SpeedState.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/System/ValueTuple_2.h"

class MonoUITableScrollV2;
class MonoUITableScrollV2_BaseScrollLogic;
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_CHECKONSCROLLEND_OFFSET UNITYSDK_OFFSET(0x13B7B3D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GETCURRENTFRAMESCROLLDISTANCE_OFFSET UNITYSDK_OFFSET(0x13B7B4E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GETMOUSESCROLLTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x13B7AE00)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GET_CANNOTDRAGRUNTIME_OFFSET UNITYSDK_OFFSET(0x13B7ABA0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x13B7B340)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GET_MOUSESCROLLSPEED_OFFSET UNITYSDK_OFFSET(0x13B7B360)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x13B7AC30)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GET__ONSCROLLSTATE_OFFSET UNITYSDK_OFFSET(0x13B7BBB0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GET__SPEEDSTATE_OFFSET UNITYSDK_OFFSET(0x13B7BBC0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_ISMOUSESCROLLBYITEM_OFFSET UNITYSDK_OFFSET(0x13B7BB40)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13B7B380)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x13B7A710)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_SET__ONSCROLLSTATE_OFFSET UNITYSDK_OFFSET(0x13B7AC50)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_SET__SPEEDSTATE_OFFSET UNITYSDK_OFFSET(0x13B7BAE0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_TICKBYFEATURESTATE_OFFSET UNITYSDK_OFFSET(0x13B71400)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_UPDATECURRENTFRAMESCROLLSPEED_OFFSET UNITYSDK_OFFSET(0x13B7B480)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B7BBD0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL__CTOR_OFFSET UNITYSDK_OFFSET(0x13B71840)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13B7BBF0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL___BASE_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x13B7BC80)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginMouseScroll_TypeDefinitionIndex = 54093;

class MonoUITableScrollV2_TableScrollPluginMouseScroll : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	static ::System::Single* StaticGet_FRAME_SPEED()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2_TableScrollPluginMouseScroll_TypeDefinitionIndex)->GetStaticField(0xC620);
	}
	static ::System::Single* StaticGet_SPEED_UP_TIME()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2_TableScrollPluginMouseScroll_TypeDefinitionIndex)->GetStaticField(0xC624);
	}
	::NAPScrollView::DataStruct::ScrollFloat _mouseScrollCurrent; // 0x18
	::NAPScrollView::DataStruct::ScrollFloat _mouseScrollTarget; // 0x20
	::System::Boolean _triggerOnScrollThisFrame; // 0x28
	::System::Single _currentScrollTime; // 0x2C
	::MonoUITableScrollV2_TableScrollPluginMouseScroll_SpeedState __speedState; // 0x30
	::MonoUITableScrollV2_TableScrollPluginMouseScroll_OnScrollState __onScrollState; // 0x34
	::NAPScrollView::DataStruct::ScrollFloat _mouseScrollSpeedPerFrame; // 0x38
	::NAPScrollView::DataStruct::ScrollFloat _mouseScrollSource; // 0x40

	::System::Void _ctor(::MonoUITableScrollV2* tableScroll)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL__CTOR_OFFSET))(this, tableScroll);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL__CCTOR_OFFSET))();
	}

	::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_ONSCROLL_OFFSET))(this, eventData);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_LATEUPDATE_OFFSET))(this);
	}

	::System::Single get_MouseScrollSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GET_MOUSESCROLLSPEED_OFFSET))(this);
	}

	::System::Boolean get_CanNotDragRuntime()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GET_CANNOTDRAGRUNTIME_OFFSET))(this);
	}

	::UnityEngine::Transform* get_transform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GET_TRANSFORM_OFFSET))(this);
	}

	::MonoUITableScrollV2_BaseScrollLogic* get_logic()
	{
		return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GET_LOGIC_OFFSET))(this);
	}

	::System::Boolean TickByFeatureState()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_TICKBYFEATURESTATE_OFFSET))(this);
	}

	::System::Void UpdateCurrentFrameScrollSpeed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_UPDATECURRENTFRAMESCROLLSPEED_OFFSET))(this);
	}

	::System::ValueTuple_2<::NAPScrollView::DataStruct::ScrollFloat, ::System::Boolean> GetCurrentFrameScrollDistance()
	{
		return ((::System::ValueTuple_2<::NAPScrollView::DataStruct::ScrollFloat, ::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GETCURRENTFRAMESCROLLDISTANCE_OFFSET))(this);
	}

	::System::Void CheckOnScrollEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_CHECKONSCROLLEND_OFFSET))(this);
	}

	::System::Boolean IsMouseScrollByItem()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_ISMOUSESCROLLBYITEM_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::ScrollFloat GetMouseScrollTargetPosition(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GETMOUSESCROLLTARGETPOSITION_OFFSET))(this, eventData);
	}

	::MonoUITableScrollV2_TableScrollPluginMouseScroll_OnScrollState get__onScrollState()
	{
		return ((::MonoUITableScrollV2_TableScrollPluginMouseScroll_OnScrollState(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GET__ONSCROLLSTATE_OFFSET))(this);
	}

	::System::Void set__onScrollState(::MonoUITableScrollV2_TableScrollPluginMouseScroll_OnScrollState value)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginMouseScroll_OnScrollState))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_SET__ONSCROLLSTATE_OFFSET))(this, value);
	}

	::MonoUITableScrollV2_TableScrollPluginMouseScroll_SpeedState get__speedState()
	{
		return ((::MonoUITableScrollV2_TableScrollPluginMouseScroll_SpeedState(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_GET__SPEEDSTATE_OFFSET))(this);
	}

	::System::Void set__speedState(::MonoUITableScrollV2_TableScrollPluginMouseScroll_SpeedState value)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginMouseScroll_SpeedState))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL_SET__SPEEDSTATE_OFFSET))(this, value);
	}

	::System::Void __base_LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL___BASE_LATEUPDATE_OFFSET))(this);
	}

	::System::Void __base_OnScroll(::UnityEngine::EventSystems::PointerEventData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINMOUSESCROLL___BASE_ONSCROLL_OFFSET))(this, P0);
	}
};

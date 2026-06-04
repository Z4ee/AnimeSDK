#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoUI3DTouch_MouseWheelType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class MonoExUICamera; }
namespace RPG::Client { class MonoUI3DTouch_FingerUtil; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_MONOUI3DTOUCH_BINDCAMERA_OFFSET UNITYSDK_OFFSET(0xC1570C0)
#define RPG_CLIENT_MONOUI3DTOUCH_CLEAR_OFFSET UNITYSDK_OFFSET(0xC15AD90)
#define RPG_CLIENT_MONOUI3DTOUCH_GETJOYSTICKMOVESPEED_OFFSET UNITYSDK_OFFSET(0xC15B000)
#define RPG_CLIENT_MONOUI3DTOUCH_GETSWIPEDURATION_OFFSET UNITYSDK_OFFSET(0xC1588E0)
#define RPG_CLIENT_MONOUI3DTOUCH_INIT_OFFSET UNITYSDK_OFFSET(0xC156F00)
#define RPG_CLIENT_MONOUI3DTOUCH_ISCDTOUCHAFTERPINCH_OFFSET UNITYSDK_OFFSET(0xC158AE0)
#define RPG_CLIENT_MONOUI3DTOUCH_ISGESTURENOTINSCREENAREA_OFFSET UNITYSDK_OFFSET(0xC158770)
#define RPG_CLIENT_MONOUI3DTOUCH_ISPAGENOTFOCUSED_OFFSET UNITYSDK_OFFSET(0xC157A50)
#define RPG_CLIENT_MONOUI3DTOUCH_ISPINCHING_OFFSET UNITYSDK_OFFSET(0xC158920)
#define RPG_CLIENT_MONOUI3DTOUCH_ISSWIPING_OFFSET UNITYSDK_OFFSET(0xC1587F0)
#define RPG_CLIENT_MONOUI3DTOUCH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC15AD20)
#define RPG_CLIENT_MONOUI3DTOUCH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC15A500)
#define RPG_CLIENT_MONOUI3DTOUCH_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC159CE0)
#define RPG_CLIENT_MONOUI3DTOUCH_ONMOUSEWHEELEND_OFFSET UNITYSDK_OFFSET(0xC15B300)
#define RPG_CLIENT_MONOUI3DTOUCH_ONMOUSEWHEELSCROLL_OFFSET UNITYSDK_OFFSET(0xC15B070)
#define RPG_CLIENT_MONOUI3DTOUCH_ONMOUSEWHEELSTART_OFFSET UNITYSDK_OFFSET(0xC15AED0)
#define RPG_CLIENT_MONOUI3DTOUCH_ONPINCHEND_OFFSET UNITYSDK_OFFSET(0xC159B80)
#define RPG_CLIENT_MONOUI3DTOUCH_ONPINCHIN_OFFSET UNITYSDK_OFFSET(0xC1597A0)
#define RPG_CLIENT_MONOUI3DTOUCH_ONPINCHOUT_OFFSET UNITYSDK_OFFSET(0xC159990)
#define RPG_CLIENT_MONOUI3DTOUCH_ONPINCHSTART_OFFSET UNITYSDK_OFFSET(0xC159660)
#define RPG_CLIENT_MONOUI3DTOUCH_ONSWIPEEND_OFFSET UNITYSDK_OFFSET(0xC1594D0)
#define RPG_CLIENT_MONOUI3DTOUCH_ONSWIPESTART_OFFSET UNITYSDK_OFFSET(0xC158FE0)
#define RPG_CLIENT_MONOUI3DTOUCH_ONSWIPE_OFFSET UNITYSDK_OFFSET(0xC159220)
#define RPG_CLIENT_MONOUI3DTOUCH_ONTOUCHSTART_OFFSET UNITYSDK_OFFSET(0xC158B80)
#define RPG_CLIENT_MONOUI3DTOUCH_ONTOUCHUP_OFFSET UNITYSDK_OFFSET(0xC158DC0)
#define RPG_CLIENT_MONOUI3DTOUCH_REFRESH_OFFSET UNITYSDK_OFFSET(0xC157100)
#define RPG_CLIENT_MONOUI3DTOUCH_RESETTOUCH_OFFSET UNITYSDK_OFFSET(0xC15ADD0)
#define RPG_CLIENT_MONOUI3DTOUCH_SETCDTOUCHAFTERPINCH_OFFSET UNITYSDK_OFFSET(0xC158B30)
#define RPG_CLIENT_MONOUI3DTOUCH_SUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xC159D30)
#define RPG_CLIENT_MONOUI3DTOUCH_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xC15A550)
#define RPG_CLIENT_MONOUI3DTOUCH_UPDATEINPUTCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC157320)
#define RPG_CLIENT_MONOUI3DTOUCH_UPDATEMOUSEWHEELINPUT_OFFSET UNITYSDK_OFFSET(0xC1575A0)
#define RPG_CLIENT_MONOUI3DTOUCH_UPDATEPINCHIN_OFFSET UNITYSDK_OFFSET(0xC158000)
#define RPG_CLIENT_MONOUI3DTOUCH_UPDATEPINCHOUT_OFFSET UNITYSDK_OFFSET(0xC1583B0)
#define RPG_CLIENT_MONOUI3DTOUCH_UPDATESWIPE_OFFSET UNITYSDK_OFFSET(0xC157BD0)
#define RPG_CLIENT_MONOUI3DTOUCH_UPDATE_OFFSET UNITYSDK_OFFSET(0xC1572A0)
#define RPG_CLIENT_MONOUI3DTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0xC15B460)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUI3DTouch_TypeDefinitionIndex = 68179;

	class MonoUI3DTouch : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single _IN_CONTROL_PINCH_FACTOR; // 0x0
		// static const ::System::Single _cd_touch_after_pinch; // 0x0
		// static const ::System::Int32 JOYSTICK_SIMULATE_SWIPE_SPEED = 0x5DC; // 0x0
		::RPG::Client::MonoUI3DTouch_MouseWheelType _MouseWheelType; // 0x18
		::System::Single _ScrollElasticity; // 0x1C
		::System::Single _ScrollDampingTime; // 0x20
		::System::Single _MousePinchFactor; // 0x24
		::System::Boolean _IsEnableInputControllerZoom; // 0x28
		::System::Boolean _IsEnableInputControllerSwipe; // 0x29
		::RPG::Client::MonoUI3DTouch_FingerUtil* _fingerUtil; // 0x30
		::System::Int32 _swipeDuration; // 0x38
		::RPG::Client::MonoExUICamera* _cameraUtil; // 0x40
		::System::Single _leftTime_touch_after_pinch; // 0x48
		::HedgehogTeam::EasyTouch::Gesture* _gesture; // 0x50
		::System::Boolean _lastState; // 0x58
		::System::Single _mouseWheelSpeed; // 0x5C
		::System::Single _mouseWheelLastInput; // 0x60
		::System::Single _mouseWheelDelayInputScale; // 0x64
		::System::Single _mouseWheelInterruptTime; // 0x68
		::System::Action_1<::HedgehogTeam::EasyTouch::Gesture*>* onSwipe; // 0x70
		::System::Action_1<::HedgehogTeam::EasyTouch::Gesture*>* onSwipeEnd; // 0x78
		::System::Action_1<::HedgehogTeam::EasyTouch::Gesture*>* onPinch; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_INIT_OFFSET))(this, a1);
		}

		::System::Void BindCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_BINDCAMERA_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_REFRESH_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateInputController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_UPDATEINPUTCONTROLLER_OFFSET))(this);
		}

		::System::Void UpdateSwipe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_UPDATESWIPE_OFFSET))(this);
		}

		::System::Void UpdatePinchIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_UPDATEPINCHIN_OFFSET))(this);
		}

		::System::Void UpdatePinchOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_UPDATEPINCHOUT_OFFSET))(this);
		}

		::System::Boolean IsPageNotFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ISPAGENOTFOCUSED_OFFSET))(this);
		}

		::System::Boolean IsGestureNotInScreenArea(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ISGESTURENOTINSCREENAREA_OFFSET))(this, a1);
		}

		::System::Boolean IsSwiping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ISSWIPING_OFFSET))(this);
		}

		::System::Int32 GetSwipeDuration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_GETSWIPEDURATION_OFFSET))(this);
		}

		::System::Boolean IsPinching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ISPINCHING_OFFSET))(this);
		}

		::System::Boolean IsCDTouchAfterPinch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ISCDTOUCHAFTERPINCH_OFFSET))(this);
		}

		::System::Void SetCDTouchAfterPinch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_SETCDTOUCHAFTERPINCH_OFFSET))(this);
		}

		::System::Void OnTouchStart(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONTOUCHSTART_OFFSET))(this, a1);
		}

		::System::Void OnTouchUp(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONTOUCHUP_OFFSET))(this, a1);
		}

		::System::Void OnSwipeStart(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONSWIPESTART_OFFSET))(this, a1);
		}

		::System::Void OnSwipe(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONSWIPE_OFFSET))(this, a1);
		}

		::System::Void OnSwipeEnd(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONSWIPEEND_OFFSET))(this, a1);
		}

		::System::Void OnPinchStart(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONPINCHSTART_OFFSET))(this, a1);
		}

		::System::Void OnPinchIn(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONPINCHIN_OFFSET))(this, a1);
		}

		::System::Void OnPinchOut(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONPINCHOUT_OFFSET))(this, a1);
		}

		::System::Void OnPinchEnd(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONPINCHEND_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONDESTROY_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_CLEAR_OFFSET))(this);
		}

		::System::Void SubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_SUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void UnsubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_UNSUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void ResetTouch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_RESETTOUCH_OFFSET))(this);
		}

		::System::Void UpdateMouseWheelInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_UPDATEMOUSEWHEELINPUT_OFFSET))(this);
		}

		::System::Single GetJoystickMoveSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_GETJOYSTICKMOVESPEED_OFFSET))(this);
		}

		::System::Void OnMouseWheelStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONMOUSEWHEELSTART_OFFSET))(this);
		}

		::System::Void OnMouseWheelScroll(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONMOUSEWHEELSCROLL_OFFSET))(this, a1);
		}

		::System::Void OnMouseWheelEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONMOUSEWHEELEND_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoUI3DTouch_MouseWheelType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class MonoExUICamera; }
namespace RPG::Client { class MonoUI3DTouch_FingerUtil; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_MONOUI3DTOUCH_BINDCAMERA_OFFSET UNITYSDK_OFFSET(0xAA08F10)
#define RPG_CLIENT_MONOUI3DTOUCH_CLEAR_OFFSET UNITYSDK_OFFSET(0xAA0C9C0)
#define RPG_CLIENT_MONOUI3DTOUCH_GETJOYSTICKMOVESPEED_OFFSET UNITYSDK_OFFSET(0xAA0CC50)
#define RPG_CLIENT_MONOUI3DTOUCH_GETSWIPEDURATION_OFFSET UNITYSDK_OFFSET(0xAA0A6A0)
#define RPG_CLIENT_MONOUI3DTOUCH_INIT_OFFSET UNITYSDK_OFFSET(0xAA08D50)
#define RPG_CLIENT_MONOUI3DTOUCH_ISCDTOUCHAFTERPINCH_OFFSET UNITYSDK_OFFSET(0xAA0A8A0)
#define RPG_CLIENT_MONOUI3DTOUCH_ISGESTURENOTINSCREENAREA_OFFSET UNITYSDK_OFFSET(0xAA0A540)
#define RPG_CLIENT_MONOUI3DTOUCH_ISPAGENOTFOCUSED_OFFSET UNITYSDK_OFFSET(0xAA09860)
#define RPG_CLIENT_MONOUI3DTOUCH_ISPINCHING_OFFSET UNITYSDK_OFFSET(0xAA0A6E0)
#define RPG_CLIENT_MONOUI3DTOUCH_ISSWIPING_OFFSET UNITYSDK_OFFSET(0xAA0A5C0)
#define RPG_CLIENT_MONOUI3DTOUCH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAA0C950)
#define RPG_CLIENT_MONOUI3DTOUCH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAA0C260)
#define RPG_CLIENT_MONOUI3DTOUCH_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAA0BB70)
#define RPG_CLIENT_MONOUI3DTOUCH_ONMOUSEWHEELEND_OFFSET UNITYSDK_OFFSET(0xAA0CF50)
#define RPG_CLIENT_MONOUI3DTOUCH_ONMOUSEWHEELSCROLL_OFFSET UNITYSDK_OFFSET(0xAA0CCC0)
#define RPG_CLIENT_MONOUI3DTOUCH_ONMOUSEWHEELSTART_OFFSET UNITYSDK_OFFSET(0xAA0CB20)
#define RPG_CLIENT_MONOUI3DTOUCH_ONPINCHEND_OFFSET UNITYSDK_OFFSET(0xAA0BA10)
#define RPG_CLIENT_MONOUI3DTOUCH_ONPINCHIN_OFFSET UNITYSDK_OFFSET(0xAA0B650)
#define RPG_CLIENT_MONOUI3DTOUCH_ONPINCHOUT_OFFSET UNITYSDK_OFFSET(0xAA0B830)
#define RPG_CLIENT_MONOUI3DTOUCH_ONPINCHSTART_OFFSET UNITYSDK_OFFSET(0xAA0B510)
#define RPG_CLIENT_MONOUI3DTOUCH_ONSWIPEEND_OFFSET UNITYSDK_OFFSET(0xAA0B320)
#define RPG_CLIENT_MONOUI3DTOUCH_ONSWIPESTART_OFFSET UNITYSDK_OFFSET(0xAA0ADA0)
#define RPG_CLIENT_MONOUI3DTOUCH_ONSWIPE_OFFSET UNITYSDK_OFFSET(0xAA0B000)
#define RPG_CLIENT_MONOUI3DTOUCH_ONTOUCHSTART_OFFSET UNITYSDK_OFFSET(0xAA0A940)
#define RPG_CLIENT_MONOUI3DTOUCH_ONTOUCHUP_OFFSET UNITYSDK_OFFSET(0xAA0ABB0)
#define RPG_CLIENT_MONOUI3DTOUCH_REFRESH_OFFSET UNITYSDK_OFFSET(0xAA08F50)
#define RPG_CLIENT_MONOUI3DTOUCH_RESETTOUCH_OFFSET UNITYSDK_OFFSET(0xAA0CA00)
#define RPG_CLIENT_MONOUI3DTOUCH_SETCDTOUCHAFTERPINCH_OFFSET UNITYSDK_OFFSET(0xAA0A8F0)
#define RPG_CLIENT_MONOUI3DTOUCH_SUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xAA0BBC0)
#define RPG_CLIENT_MONOUI3DTOUCH_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xAA0C2B0)
#define RPG_CLIENT_MONOUI3DTOUCH_UPDATEINPUTCONTROLLER_OFFSET UNITYSDK_OFFSET(0xAA09170)
#define RPG_CLIENT_MONOUI3DTOUCH_UPDATEMOUSEWHEELINPUT_OFFSET UNITYSDK_OFFSET(0xAA093F0)
#define RPG_CLIENT_MONOUI3DTOUCH_UPDATEPINCHIN_OFFSET UNITYSDK_OFFSET(0xAA09DC0)
#define RPG_CLIENT_MONOUI3DTOUCH_UPDATEPINCHOUT_OFFSET UNITYSDK_OFFSET(0xAA0A180)
#define RPG_CLIENT_MONOUI3DTOUCH_UPDATESWIPE_OFFSET UNITYSDK_OFFSET(0xAA09990)
#define RPG_CLIENT_MONOUI3DTOUCH_UPDATE_OFFSET UNITYSDK_OFFSET(0xAA090F0)
#define RPG_CLIENT_MONOUI3DTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0xAA0D0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUI3DTouch_TypeDefinitionIndex = 67227;

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

		::System::Void Init(::UnityEngine::Camera* controlCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_INIT_OFFSET))(this, controlCamera);
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

		::System::Boolean IsGestureNotInScreenArea(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ISGESTURENOTINSCREENAREA_OFFSET))(this, gesture);
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

		::System::Void OnTouchStart(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONTOUCHSTART_OFFSET))(this, gesture);
		}

		::System::Void OnTouchUp(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONTOUCHUP_OFFSET))(this, gesture);
		}

		::System::Void OnSwipeStart(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONSWIPESTART_OFFSET))(this, gesture);
		}

		::System::Void OnSwipe(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONSWIPE_OFFSET))(this, gesture);
		}

		::System::Void OnSwipeEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONSWIPEEND_OFFSET))(this, gesture);
		}

		::System::Void OnPinchStart(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONPINCHSTART_OFFSET))(this, gesture);
		}

		::System::Void OnPinchIn(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONPINCHIN_OFFSET))(this, gesture);
		}

		::System::Void OnPinchOut(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONPINCHOUT_OFFSET))(this, gesture);
		}

		::System::Void OnPinchEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONPINCHEND_OFFSET))(this, gesture);
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

		::System::Void OnMouseWheelScroll(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONMOUSEWHEELSCROLL_OFFSET))(this, value);
		}

		::System::Void OnMouseWheelEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_ONMOUSEWHEELEND_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_INIT_OFFSET UNITYSDK_OFFSET(0xD48A720)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD48B6A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD48B200)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_ONJOYSTICKPRESS_OFFSET UNITYSDK_OFFSET(0xD48AC80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_ONJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xD48AEC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_ONJOYSTICKZOOM_OFFSET UNITYSDK_OFFSET(0xD48ABE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_ONMOUSEWHEELROLL_OFFSET UNITYSDK_OFFSET(0xD48AAD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xD48BB40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__CALCULATEMINSIZE_OFFSET UNITYSDK_OFFSET(0xD48A890)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD48C2F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__ONPINCHEND_OFFSET UNITYSDK_OFFSET(0xD48C2A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__ONPINCHIN_OFFSET UNITYSDK_OFFSET(0xD48C100)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__ONPINCHOUT_OFFSET UNITYSDK_OFFSET(0xD48C1D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__ONSWIPEEND_OFFSET UNITYSDK_OFFSET(0xD48C040)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__ONSWIPE_OFFSET UNITYSDK_OFFSET(0xD48BF50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__SETFINALPOS_OFFSET UNITYSDK_OFFSET(0xD48AF80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__SETPOS_OFFSET UNITYSDK_OFFSET(0xD48AD90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__SETSIZE_OFFSET UNITYSDK_OFFSET(0xD48A930)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__TICK_OFFSET UNITYSDK_OFFSET(0xD48BB90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__ZOOMSIZE_OFFSET UNITYSDK_OFFSET(0xD48AB70)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostZoomControl_TypeDefinitionIndex = 79086;

	class LimaoNewsPostZoomControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Single LimitHeightScale; // 0x38
		::System::Single LimitWidthScale; // 0x3C
		::System::Single PINCH_ZOOM_SPEED; // 0x40
		::System::Single DRAGGING_SMOOTH_TIME; // 0x44
		::System::Single BACK_TO_CENTER_SMOOTH_TIME; // 0x48
		::System::Single SIZE_CHANGE_SMOOTH_TIME; // 0x4C
		::System::Single MOUSE_WHEEL_ZOOM_SPEED; // 0x50
		::System::Single JOYSTICK_WHEEL_ZOOM_SPEED; // 0x54
		::System::Single JOYSTICK_MOVE_STEP; // 0x58
		::System::Single JOYSTICK_MOVE_STEP_FACTOR; // 0x5C
		::System::Single STICK_THRESHOLD; // 0x60
		::UnityEngine::RectTransform* _targetRect; // 0x68
		::UnityEngine::Vector2 _screenSize; // 0x70
		::System::Single _realWidth; // 0x78
		::System::Single _realHeight; // 0x7C
		::System::Single _scale; // 0x80
		::System::Single _minWidth; // 0x84
		::System::Single _minHeight; // 0x88
		::System::Single _currentWidth; // 0x8C
		::System::Single _currentHeight; // 0x90
		::UnityEngine::Vector2 _currentPos; // 0x94
		::System::Nullable_1<::UnityEngine::Vector2> _posFinal; // 0x9C
		::System::Nullable_1<::UnityEngine::Vector2> _sizeFinal; // 0xA8
		::UnityEngine::Vector2 _posVelocity; // 0xB4
		::UnityEngine::Vector2 _sizeVelocity; // 0xBC
		::System::Boolean _isDragging; // 0xC4
		::System::Boolean _isPinching; // 0xC5
		::System::Boolean _isFromSetSize; // 0xC6

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void OnMouseWheelRoll(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_ONMOUSEWHEELROLL_OFFSET))(this, a1);
		}

		::System::Void OnJoyStickZoom(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_ONJOYSTICKZOOM_OFFSET))(this, a1);
		}

		::System::Void OnJoyStickPress(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_ONJOYSTICKPRESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnJoyStickRelease(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_ONJOYSTICKRELEASE_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void _Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__TICK_OFFSET))(this);
		}

		::System::Void _CalculateMinSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__CALCULATEMINSIZE_OFFSET))(this);
		}

		::System::Void _SetSize(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__SETSIZE_OFFSET))(this, a1, a2);
		}

		::System::Void _SetPos(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__SETPOS_OFFSET))(this, a1, a2);
		}

		::System::Void _SetFinalPos(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__SETFINALPOS_OFFSET))(this, a1, a2);
		}

		::System::Void _ZoomSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__ZOOMSIZE_OFFSET))(this, a1);
		}

		::System::Void _OnSwipe(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__ONSWIPE_OFFSET))(this, a1);
		}

		::System::Void _OnSwipeEnd(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__ONSWIPEEND_OFFSET))(this, a1);
		}

		::System::Void _OnPinchIn(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__ONPINCHIN_OFFSET))(this, a1);
		}

		::System::Void _OnPinchOut(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__ONPINCHOUT_OFFSET))(this, a1);
		}

		::System::Void _OnPinchEnd(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMCONTROL__ONPINCHEND_OFFSET))(this, a1);
		}
	};
}

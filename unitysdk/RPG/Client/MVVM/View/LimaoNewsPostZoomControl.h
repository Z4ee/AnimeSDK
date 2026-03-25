#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_INIT_OFFSET UNITYSDK_OFFSET(0x9AA3F10)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_073D39C3DB5A9C1F_OFFSET UNITYSDK_OFFSET(0x9AA4740)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_62588A1BBFF521EC_1_OFFSET UNITYSDK_OFFSET(0x9AA5830)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_62588A1BBFF521EC_OFFSET UNITYSDK_OFFSET(0x9AA5760)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x9AA51F0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_75B2F7652BAFC47F_OFFSET UNITYSDK_OFFSET(0x9AA4110)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9AA4070)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_9D967D80C41C7781_OFFSET UNITYSDK_OFFSET(0x9AA58F0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_A77033F2447DC719_OFFSET UNITYSDK_OFFSET(0x9AA56A0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_E1CE0A1C7957700D_OFFSET UNITYSDK_OFFSET(0x9AA4550)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_E3ADA5CA2C064E44_OFFSET UNITYSDK_OFFSET(0x9AA4340)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_E9A8695D8BBAA196_OFFSET UNITYSDK_OFFSET(0x9AA55B0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9AA4DB0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9AA49C0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_ONJOYSTICKPRESS_OFFSET UNITYSDK_OFFSET(0x9AA4440)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_ONJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x9AA4680)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_ONJOYSTICKZOOM_OFFSET UNITYSDK_OFFSET(0x9AA43B0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_ONMOUSEWHEELROLL_OFFSET UNITYSDK_OFFSET(0x9AA42B0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x9AA51A0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA5940)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsPostZoomControl_TypeDefinitionIndex = 61025;

	class LimaoNewsPostZoomControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Single LimitHeightScale; // 0x30
		::System::Single LimitWidthScale; // 0x34
		::System::Single PINCH_ZOOM_SPEED; // 0x38
		::System::Single DRAGGING_SMOOTH_TIME; // 0x3C
		::System::Single BACK_TO_CENTER_SMOOTH_TIME; // 0x40
		::System::Single SIZE_CHANGE_SMOOTH_TIME; // 0x44
		::System::Single MOUSE_WHEEL_ZOOM_SPEED; // 0x48
		::System::Single JOYSTICK_WHEEL_ZOOM_SPEED; // 0x4C
		::System::Single JOYSTICK_MOVE_STEP; // 0x50
		::System::Single JOYSTICK_MOVE_STEP_FACTOR; // 0x54
		::System::Single STICK_THRESHOLD; // 0x58
		::UnityEngine::RectTransform* Field_6_11; // 0x60
		::UnityEngine::Vector2 Field_6_12; // 0x68
		::System::Single Field_6_13; // 0x70
		::System::Single Field_6_14; // 0x74
		::System::Single Field_6_15; // 0x78
		::System::Single Field_6_16; // 0x7C
		::System::Single Field_6_17; // 0x80
		::System::Single Field_6_18; // 0x84
		::System::Single Field_6_19; // 0x88
		::UnityEngine::Vector2 Field_6_20; // 0x8C
		::System::Nullable_1<::UnityEngine::Vector2> Field_6_21; // 0x94
		::System::Nullable_1<::UnityEngine::Vector2> Field_6_22; // 0xA0
		::UnityEngine::Vector2 Field_6_23; // 0xAC
		::UnityEngine::Vector2 Field_6_24; // 0xB4
		::System::Boolean Field_6_25; // 0xBC
		::System::Boolean Field_6_26; // 0xBD
		::System::Boolean Field_6_27; // 0xBE

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void OnMouseWheelRoll(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_ONMOUSEWHEELROLL_OFFSET))(this, a1);
		}

		::System::Void OnJoyStickZoom(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_ONJOYSTICKZOOM_OFFSET))(this, a1);
		}

		::System::Void OnJoyStickPress(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_ONJOYSTICKPRESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnJoyStickRelease(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_ONJOYSTICKRELEASE_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void Method_6_6D93101E4CE10A96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_6D93101E4CE10A96_OFFSET))(this);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_6_75B2F7652BAFC47F(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_75B2F7652BAFC47F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_E1CE0A1C7957700D(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_E1CE0A1C7957700D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_073D39C3DB5A9C1F(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_073D39C3DB5A9C1F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_E3ADA5CA2C064E44(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_E3ADA5CA2C064E44_OFFSET))(this, a1);
		}

		::System::Void Method_6_E9A8695D8BBAA196(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_E9A8695D8BBAA196_OFFSET))(this, a1);
		}

		::System::Void Method_6_A77033F2447DC719(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_A77033F2447DC719_OFFSET))(this, a1);
		}

		::System::Void Method_6_62588A1BBFF521EC(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_62588A1BBFF521EC_OFFSET))(this, a1);
		}

		::System::Void Method_6_62588A1BBFF521EC_1(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_62588A1BBFF521EC_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_9D967D80C41C7781(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMCONTROL_METHOD_6_9D967D80C41C7781_OFFSET))(this, a1);
		}
	};
}

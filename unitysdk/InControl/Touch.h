#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/TouchType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/TouchPhase.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define INCONTROL_TOUCH_GET_ISMOUSE_OFFSET UNITYSDK_OFFSET(0x15C09870)
#define INCONTROL_TOUCH_GET_NORMALIZEDPRESSURE_1_OFFSET UNITYSDK_OFFSET(0x15C09840)
#define INCONTROL_TOUCH_GET_NORMALIZEDPRESSURE_OFFSET UNITYSDK_OFFSET(0x15C09810)
#define INCONTROL_TOUCH_RESET_OFFSET UNITYSDK_OFFSET(0x15C097A0)
#define INCONTROL_TOUCH_SETWITHMOUSEDATA_OFFSET UNITYSDK_OFFSET(0x15C099F0)
#define INCONTROL_TOUCH_SETWITHTOUCHDATA_OFFSET UNITYSDK_OFFSET(0x15C09880)
#define INCONTROL_TOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x15C09790)

namespace InControl
{
	inline static constexpr unsigned int Touch_TypeDefinitionIndex = 31465;

	class Touch : public ::System::Object
	{
	public:
		// static const ::System::Int32 FingerID_None = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 FingerID_Mouse = 0xFFFFFFFE; // 0x0
		::UnityEngine::Vector2 position; // 0x10
		::System::Single radius; // 0x18
		::System::Single altitudeAngle; // 0x1C
		::System::Single maximumPossiblePressure; // 0x20
		::UnityEngine::Vector2 startPosition; // 0x24
		::UnityEngine::Vector2 deltaPosition; // 0x2C
		::System::Int32 fingerId; // 0x34
		::System::Int32 tapCount; // 0x38
		::System::Single radiusVariance; // 0x3C
		::System::Single deltaTime; // 0x40
		::System::Int32 mouseButton; // 0x44
		::UnityEngine::Vector2 lastPosition; // 0x48
		::System::UInt64 updateTick; // 0x50
		::InControl::TouchType type; // 0x58
		::System::Single azimuthAngle; // 0x5C
		::UnityEngine::TouchPhase phase; // 0x60
		::System::Single pressure; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_RESET_OFFSET))(this);
		}

		::System::Single get_normalizedPressure()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_GET_NORMALIZEDPRESSURE_OFFSET))(this);
		}

		::System::Single get_NormalizedPressure_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_GET_NORMALIZEDPRESSURE_1_OFFSET))(this);
		}

		::System::Boolean get_IsMouse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_GET_ISMOUSE_OFFSET))(this);
		}

		::System::Void SetWithTouchData(::UnityEngine::Touch touch, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Touch, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_SETWITHTOUCHDATA_OFFSET))(this, touch, updateTick, deltaTime);
		}

		::System::Boolean SetWithMouseData(::System::Int32 button, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_SETWITHMOUSEDATA_OFFSET))(this, button, updateTick, deltaTime);
		}
	};
}

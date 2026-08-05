#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoNotRelateGameLogic/GameTimeClockObject_Axis.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class EventArgs; }
namespace UnityEngine { class Transform; }

#define MONONOTRELATEGAMELOGIC_GAMETIMECLOCKOBJECT_GETUINT_OFFSET UNITYSDK_OFFSET(0x162FC4B0)
#define MONONOTRELATEGAMELOGIC_GAMETIMECLOCKOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x162FC2E0)
#define MONONOTRELATEGAMELOGIC_GAMETIMECLOCKOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x162FBDB0)
#define MONONOTRELATEGAMELOGIC_GAMETIMECLOCKOBJECT_ONMAINCITYTIMECHANGED_OFFSET UNITYSDK_OFFSET(0x162FC460)
#define MONONOTRELATEGAMELOGIC_GAMETIMECLOCKOBJECT_UPDATECLOCKTIME_OFFSET UNITYSDK_OFFSET(0x162FC0D0)
#define MONONOTRELATEGAMELOGIC_GAMETIMECLOCKOBJECT_UPDATEHANDROTATION_OFFSET UNITYSDK_OFFSET(0x162FC530)
#define MONONOTRELATEGAMELOGIC_GAMETIMECLOCKOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x162FC8C0)

namespace MonoNotRelateGameLogic
{
	inline static constexpr unsigned int GameTimeClockObject_TypeDefinitionIndex = 88139;

	class GameTimeClockObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* minuteHand; // 0x18
		::UnityEngine::Transform* hourHand; // 0x20
		::MonoNotRelateGameLogic::GameTimeClockObject_Axis rotationAxis; // 0x28
		::System::Boolean isNegativeRotate; // 0x2C
		::System::Boolean isMinuteHandNotNull; // 0x2D
		::System::Boolean isHourHandNotNull; // 0x2E
		::System::Int32 hour; // 0x30
		::System::Int32 minute; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONOTRELATEGAMELOGIC_GAMETIMECLOCKOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONOTRELATEGAMELOGIC_GAMETIMECLOCKOBJECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONOTRELATEGAMELOGIC_GAMETIMECLOCKOBJECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnMainCityTimeChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MONONOTRELATEGAMELOGIC_GAMETIMECLOCKOBJECT_ONMAINCITYTIMECHANGED_OFFSET))(this, args);
		}

		::System::Void UpdateClockTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONOTRELATEGAMELOGIC_GAMETIMECLOCKOBJECT_UPDATECLOCKTIME_OFFSET))(this);
		}

		static ::System::UInt32 GetUint(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::UInt32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONONOTRELATEGAMELOGIC_GAMETIMECLOCKOBJECT_GETUINT_OFFSET))(x, y);
		}

		::System::Void UpdateHandRotation(::System::Int32 h, ::System::Int32 m)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONONOTRELATEGAMELOGIC_GAMETIMECLOCKOBJECT_UPDATEHANDROTATION_OFFSET))(this, h, m);
		}
	};
}

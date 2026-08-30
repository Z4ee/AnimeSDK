#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AirshipCarDetectTrigger.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_AIRSHIPCARDETECTACCELTRIGGER_TICK_OFFSET UNITYSDK_OFFSET(0x19C5EA10)
#define RPG_CLIENT_AIRSHIPCARDETECTACCELTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C5EDD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipCarDetectAccelTrigger_TypeDefinitionIndex = 59949;

	class AirshipCarDetectAccelTrigger : public ::RPG::Client::AirshipCarDetectTrigger
	{
	public:
		::UnityEngine::AnimationCurve* accelSpeedRatioByDistance; // 0x40
		::System::Single accelSpeedTime; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARDETECTACCELTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Boolean Tick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARDETECTACCELTRIGGER_TICK_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROADRASH_ROADRASHGAMESETTINGSCONFIGURE_ROADRASHTREVENTDETECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xDE95D70)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig_TypeDefinitionIndex = 75485;

	class RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig : public ::System::Object
	{
	public:
		::System::Single SharpCurveLookAheadDistance; // 0x10
		::System::Single SharpCurveMinTurnAngle; // 0x14
		::System::Single SharpCurveExitTurnAngle; // 0x18
		::System::Single PerfectDriftCurveDetectDistance; // 0x1C
		::System::Single PerfectDriftCurveMinTurnAngle; // 0x20
		::System::Single RearCarApproachDistance; // 0x24
		::System::Single RearCarClosingSpeed; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_ROADRASHGAMESETTINGSCONFIGURE_ROADRASHTREVENTDETECTORCONFIG__CTOR_OFFSET))(this);
		}
	};
}

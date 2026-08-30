#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROADRASH_ROADRASHGAMESETTINGSCONFIGURE_AICARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xDE95D90)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int RoadRashGameSettingsConfigure_AICarConfig_TypeDefinitionIndex = 75486;

	class RoadRashGameSettingsConfigure_AICarConfig : public ::System::Object
	{
	public:
		::System::Single AheadDistanceThreshold; // 0x10
		::System::Single AheadSpeedRatio; // 0x14
		::System::Single BehindDoNothingWeight; // 0x18
		::System::Single BehindSpeedUpWeight; // 0x1C
		::System::Single BehindBuffWeight; // 0x20
		::System::Single BehindSpeedRatio; // 0x24
		::System::Single BehindBuffDuration; // 0x28
		::System::Single BehindBuffSpeedBoost; // 0x2C
		::System::Single BehindBehaviorCooldown; // 0x30
		::System::Single OvertakeProtectionDuration; // 0x34
		::System::Single OvertakeProtectionSpeedRatio; // 0x38
		::System::Single OvertakeProtectionMinLeadDistance; // 0x3C
		::System::Single OvertakenSpeedRatio; // 0x40
		::System::Single OvertakenProtectionDuration; // 0x44
		::System::Single OvertakenRecoverySpeedRatio; // 0x48
		::System::Single OvertakenConfirmDuration; // 0x4C
		::System::Single OvertakenInHighSpeedRatio; // 0x50
		::System::Single OvertakenRecoveryInHighSpeedRatio; // 0x54
		::System::Single MaxSpeedHardCeilingInHighSpeed; // 0x58
		::System::Single MinAISpeedRatio; // 0x5C
		::System::Single IndividualDistanceJitterRange; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_ROADRASHGAMESETTINGSCONFIGURE_AICARCONFIG__CTOR_OFFSET))(this);
		}
	};
}

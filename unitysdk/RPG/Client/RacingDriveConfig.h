#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_RACINGDRIVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xDDF16D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RacingDriveConfig_TypeDefinitionIndex = 59910;

	class RacingDriveConfig : public ::System::Object
	{
	public:
		::System::Single optimalLineStrength; // 0x10
		::System::Single outerLineStrength; // 0x14
		::System::Single cruisingBiasRange; // 0x18
		::System::Single cornerTightness; // 0x1C
		::System::Single lineFollowSmoothTime; // 0x20
		::System::Single maxTrackOffset; // 0x24
		::System::Single bakedLineSampleStep; // 0x28
		::System::Single steeringSmoothTime; // 0x2C
		::System::Single steeringLookAheadDistance; // 0x30
		::System::Single followLaneWidth; // 0x34
		::System::Single followDistance; // 0x38
		::System::Single overtakeTriggerDistance; // 0x3C
		::System::Single overtakeSideClearance; // 0x40
		::System::Single mergeBackClearanceDistance; // 0x44
		::System::Single overtakeSpeedMultiplier; // 0x48
		::System::Single laneChangeDuration; // 0x4C
		::System::Single overtakeCooldown; // 0x50
		::System::Single tailgatedSpeedMultiplier; // 0x54
		::UnityEngine::Vector2 randomSpeedRange; // 0x58
		::UnityEngine::Vector2 randomSpeedInterval; // 0x60
		::System::Single randomSpeedSmoothTime; // 0x68
		::UnityEngine::AnimationCurve* followSpeedCurve; // 0x70
		::System::Single softBrakeMultiplier; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RACINGDRIVECONFIG__CTOR_OFFSET))(this);
		}
	};
}

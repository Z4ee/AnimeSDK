#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITY_CHARGING_METHOD_4_22F71774B666C792_OFFSET UNITYSDK_OFFSET(0x1CD57000)
#define RPG_CLIENT_ROADRASHGAMEABILITY_CHARGING_METHOD_4_8DCC1DE0BE48DA97_OFFSET UNITYSDK_OFFSET(0x1CD56FC0)
#define RPG_CLIENT_ROADRASHGAMEABILITY_CHARGING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD56FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbility_Charging_TypeDefinitionIndex = 10270;

	class RoadRashGameAbility_Charging : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::System::String* SpeedDecelerationCurveName; // 0x18
		::RPG::GameCore::FixPoint SpeedDecelerationDuration; // 0x20
		::RPG::GameCore::FixPoint SpeedDecelerationValue; // 0x28
		::RPG::GameCore::FixPoint SpeedDecelerationMinValue; // 0x30
		::System::String* SpeedDecelerationSpeedMappingCurveName; // 0x38
		::RPG::GameCore::FixPoint SpeedDecelerationSpeedMappingMin; // 0x40
		::RPG::GameCore::FixPoint SpeedDecelerationSpeedMappingMax; // 0x48
		::System::String* RotateTurnCurveName; // 0x50
		::RPG::GameCore::FixPoint RotateTurnDuration; // 0x58
		::RPG::GameCore::FixPoint RotateTurnAngle; // 0x60
		::RPG::GameCore::FixPoint TurnDetectDistance; // 0x68
		::System::String* ChargeLevelAdditionalAttributeName; // 0x70
		::RPG::GameCore::FixPoint ChargeLevel; // 0x78
		::RPG::GameCore::FixPoint ChargeBaseRate; // 0x80
		::RPG::GameCore::FixPoint ChargeRequireMinSpeed; // 0x88
		::RPG::GameCore::FixPoint ChargeRequireMaxSpeed; // 0x90
		::RPG::GameCore::FixPoint ChargeSpeedEffectMinRate; // 0x98
		::RPG::GameCore::FixPoint ChargeSpeedEffectMaxRate; // 0xA0
		::RPG::GameCore::FixPoint ChargeRequireMinCurvature; // 0xA8
		::RPG::GameCore::FixPoint ChargeRequireMaxCurvature; // 0xB0
		::RPG::GameCore::FixPoint ChargeCurvatureEffectMinRate; // 0xB8
		::RPG::GameCore::FixPoint ChargeCurvatureEffectMaxRate; // 0xC0
		::RPG::GameCore::FixPoint ChargeToUltimateBaseRate; // 0xC8
		::RPG::GameCore::FixPoint ChargeToUltimateRequireMinSpeed; // 0xD0
		::RPG::GameCore::FixPoint ChargeToUltimateRequireMaxSpeed; // 0xD8
		::RPG::GameCore::FixPoint ChargeToUltimateSpeedEffectMinRate; // 0xE0
		::RPG::GameCore::FixPoint ChargeToUltimateSpeedEffectMaxRate; // 0xE8
		::RPG::GameCore::FixPoint ChargeToUltimateRequireMinCurvature; // 0xF0
		::RPG::GameCore::FixPoint ChargeToUltimateRequireMaxCurvature; // 0xF8
		::RPG::GameCore::FixPoint ChargeToUltimateCurvatureEffectMinRate; // 0x100
		::RPG::GameCore::FixPoint ChargeToUltimateCurvatureEffectMaxRate; // 0x108
		::RPG::GameCore::FixPoint ImpactBoundaryValueLoss; // 0x110
		::RPG::GameCore::FixPoint ImpactBoundaryValueLossCooldown; // 0x118
		::RPG::GameCore::FixPoint FreeLookXDamping; // 0x120
		::System::String* ChargeBaseRateAdditiveRatioAttributeName; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_CHARGING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8DCC1DE0BE48DA97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_Charging*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_Charging*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_CHARGING_METHOD_4_8DCC1DE0BE48DA97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_22F71774B666C792(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_Charging* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_Charging*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_CHARGING_METHOD_4_22F71774B666C792_OFFSET))(a1, a2);
		}
	};
}

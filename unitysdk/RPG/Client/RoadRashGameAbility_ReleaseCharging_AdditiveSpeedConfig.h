#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING_ADDITIVESPEEDCONFIG_METHOD_2_8AC8D44D25B8EBA1_OFFSET UNITYSDK_OFFSET(0x1CD58D30)
#define RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING_ADDITIVESPEEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD593C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbility_ReleaseCharging_AdditiveSpeedConfig_TypeDefinitionIndex = 10271;

	class RoadRashGameAbility_ReleaseCharging_AdditiveSpeedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint RequireChargeValue; // 0x10
		::System::String* AdditiveSpeedCurveName; // 0x18
		::RPG::GameCore::FixPoint AdditiveDuration; // 0x20
		::RPG::GameCore::FixPoint AdditiveSpeed; // 0x28
		::RPG::GameCore::FixPoint DirectionCorrectionStartTime; // 0x30
		::RPG::GameCore::FixPoint FOV; // 0x38
		::System::String* FOVBlendInCurveName; // 0x40
		::RPG::GameCore::FixPoint FOVBlendInTime; // 0x48
		::System::String* FOVBlendOutCurveName; // 0x50
		::RPG::GameCore::FixPoint FOVBlendOutTime; // 0x58
		::RPG::GameCore::FixPoint BlurRadius; // 0x60
		::RPG::GameCore::FixPoint BlurStart; // 0x68
		::RPG::GameCore::FixPoint BlurFeather; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING_ADDITIVESPEEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8AC8D44D25B8EBA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_ReleaseCharging_AdditiveSpeedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_ReleaseCharging_AdditiveSpeedConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING_ADDITIVESPEEDCONFIG_METHOD_2_8AC8D44D25B8EBA1_OFFSET))(a1, a2);
		}
	};
}

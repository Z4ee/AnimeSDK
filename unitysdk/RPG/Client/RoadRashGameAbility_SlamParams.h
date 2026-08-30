#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::Client { class RoadRashGameAbilityValueModifer; }
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITY_SLAMPARAMS_METHOD_2_AD5C12E43C2BDBCD_OFFSET UNITYSDK_OFFSET(0x1D317390)
#define RPG_CLIENT_ROADRASHGAMEABILITY_SLAMPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D317A40)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbility_SlamParams_TypeDefinitionIndex = 10278;

	class RoadRashGameAbility_SlamParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MoveSpeedCurveName; // 0x10
		::System::String* MoveSpeedBlendCurveName; // 0x18
		::RPG::GameCore::FixPoint MoveSpeed; // 0x20
		::RPG::GameCore::FixPoint MoveDuration; // 0x28
		::System::String* MoveOffsetRotateCurveName; // 0x30
		::RPG::GameCore::FixPoint MoveOffsetDuration; // 0x38
		::RPG::GameCore::FixPoint MoveSpeedProtectDuration; // 0x40
		::RPG::GameCore::FixPoint ImpactUltimateEnergy; // 0x48
		::Il2CppArray<::RPG::Client::RoadRashGameAbilityValueModifer*>* ImpactSpeedModifier; // 0x50
		::Il2CppArray<::RPG::Client::RoadRashGameAbilityValueModifer*>* EnhanceImpactSpeedModifier; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_SLAMPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AD5C12E43C2BDBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_SlamParams*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_SlamParams*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_SLAMPARAMS_METHOD_2_AD5C12E43C2BDBCD_OFFSET))(a1, a2);
		}
	};
}

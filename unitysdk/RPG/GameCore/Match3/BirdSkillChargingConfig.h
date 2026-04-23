#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/Match3/BirdSkillChargeType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_BIRDSKILLCHARGINGCONFIG_METHOD_2_096D7C2B0D193E44_OFFSET UNITYSDK_OFFSET(0x18AAF370)
#define RPG_GAMECORE_MATCH3_BIRDSKILLCHARGINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18AAF4B0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdSkillChargingConfig_TypeDefinitionIndex = 23733;

	class BirdSkillChargingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::Match3::BirdSkillChargeType ChargeType; // 0x10
		::System::UInt32 StyleID; // 0x14
		::System::UInt32 ChargeCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLCHARGINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_096D7C2B0D193E44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillChargingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillChargingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLCHARGINGCONFIG_METHOD_2_096D7C2B0D193E44_OFFSET))(a1, a2);
		}
	};
}

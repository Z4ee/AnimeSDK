#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSTONEEFFECTCONFIG_METHOD_3_2630968E48C74F43_OFFSET UNITYSDK_OFFSET(0x1DD65B90)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSTONEEFFECTCONFIG_METHOD_3_8C3975CFC16D44C2_OFFSET UNITYSDK_OFFSET(0x1DD65C30)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSTONEEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD65C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersMakeBrickStoneEffectConfig_TypeDefinitionIndex = 21162;

	class LittleGameAbilityTeamTowersMakeBrickStoneEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSTONEEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2630968E48C74F43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickStoneEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickStoneEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSTONEEFFECTCONFIG_METHOD_3_2630968E48C74F43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8C3975CFC16D44C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickStoneEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickStoneEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSTONEEFFECTCONFIG_METHOD_3_8C3975CFC16D44C2_OFFSET))(a1, a2);
		}
	};
}

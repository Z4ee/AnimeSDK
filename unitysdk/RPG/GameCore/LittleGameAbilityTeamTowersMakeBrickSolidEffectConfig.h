#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSOLIDEFFECTCONFIG_METHOD_3_C8C99F80A16FC049_OFFSET UNITYSDK_OFFSET(0x1DD65A90)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSOLIDEFFECTCONFIG_METHOD_3_E977936DB6BA78F4_OFFSET UNITYSDK_OFFSET(0x1DD65B30)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSOLIDEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD65B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersMakeBrickSolidEffectConfig_TypeDefinitionIndex = 21169;

	class LittleGameAbilityTeamTowersMakeBrickSolidEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSOLIDEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C8C99F80A16FC049(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickSolidEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickSolidEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSOLIDEFFECTCONFIG_METHOD_3_C8C99F80A16FC049_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E977936DB6BA78F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickSolidEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickSolidEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSOLIDEFFECTCONFIG_METHOD_3_E977936DB6BA78F4_OFFSET))(a1, a2);
		}
	};
}

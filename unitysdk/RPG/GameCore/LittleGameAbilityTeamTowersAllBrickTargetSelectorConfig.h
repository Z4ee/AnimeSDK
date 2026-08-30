#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSALLBRICKTARGETSELECTORCONFIG_METHOD_3_162CA2936B6D1664_OFFSET UNITYSDK_OFFSET(0x1D1FCEF0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSALLBRICKTARGETSELECTORCONFIG_METHOD_3_A0C483FF120A54B9_OFFSET UNITYSDK_OFFSET(0x1D1FCF90)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSALLBRICKTARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FCF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersAllBrickTargetSelectorConfig_TypeDefinitionIndex = 21173;

	class LittleGameAbilityTeamTowersAllBrickTargetSelectorConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSALLBRICKTARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_162CA2936B6D1664(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersAllBrickTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersAllBrickTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSALLBRICKTARGETSELECTORCONFIG_METHOD_3_162CA2936B6D1664_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A0C483FF120A54B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersAllBrickTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersAllBrickTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSALLBRICKTARGETSELECTORCONFIG_METHOD_3_A0C483FF120A54B9_OFFSET))(a1, a2);
		}
	};
}

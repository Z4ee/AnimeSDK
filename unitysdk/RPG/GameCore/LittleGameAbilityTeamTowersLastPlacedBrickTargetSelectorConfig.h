#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSLASTPLACEDBRICKTARGETSELECTORCONFIG_METHOD_3_4F4174095DC65DA2_OFFSET UNITYSDK_OFFSET(0x1DD657F0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSLASTPLACEDBRICKTARGETSELECTORCONFIG_METHOD_3_D5B2BA0762306E6E_OFFSET UNITYSDK_OFFSET(0x1DD658C0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSLASTPLACEDBRICKTARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD658B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersLastPlacedBrickTargetSelectorConfig_TypeDefinitionIndex = 21172;

	class LittleGameAbilityTeamTowersLastPlacedBrickTargetSelectorConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Count; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSLASTPLACEDBRICKTARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4F4174095DC65DA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersLastPlacedBrickTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersLastPlacedBrickTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSLASTPLACEDBRICKTARGETSELECTORCONFIG_METHOD_3_4F4174095DC65DA2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D5B2BA0762306E6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersLastPlacedBrickTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersLastPlacedBrickTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSLASTPLACEDBRICKTARGETSELECTORCONFIG_METHOD_3_D5B2BA0762306E6E_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSCONTROLEDBRICKTARGETSELECTORCONFIG_METHOD_3_3898A8A38F3471F7_OFFSET UNITYSDK_OFFSET(0x1DD651F0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSCONTROLEDBRICKTARGETSELECTORCONFIG_METHOD_3_644D7E524C97E806_OFFSET UNITYSDK_OFFSET(0x1DD65290)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSCONTROLEDBRICKTARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD65280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersControledBrickTargetSelectorConfig_TypeDefinitionIndex = 21171;

	class LittleGameAbilityTeamTowersControledBrickTargetSelectorConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSCONTROLEDBRICKTARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3898A8A38F3471F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersControledBrickTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersControledBrickTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSCONTROLEDBRICKTARGETSELECTORCONFIG_METHOD_3_3898A8A38F3471F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_644D7E524C97E806(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersControledBrickTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersControledBrickTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSCONTROLEDBRICKTARGETSELECTORCONFIG_METHOD_3_644D7E524C97E806_OFFSET))(a1, a2);
		}
	};
}

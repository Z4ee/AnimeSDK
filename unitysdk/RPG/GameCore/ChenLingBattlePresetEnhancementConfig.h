#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEPRESETENHANCEMENTCONFIG_METHOD_2_5065267F724C2823_OFFSET UNITYSDK_OFFSET(0x1CFAC390)
#define RPG_GAMECORE_CHENLINGBATTLEPRESETENHANCEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFAC4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattlePresetEnhancementConfig_TypeDefinitionIndex = 15519;

	class ChenLingBattlePresetEnhancementConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 EnhancementID; // 0x10
		::System::UInt32 EnhancementLevel; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPRESETENHANCEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5065267F724C2823(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattlePresetEnhancementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattlePresetEnhancementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPRESETENHANCEMENTCONFIG_METHOD_2_5065267F724C2823_OFFSET))(a1, a2);
		}
	};
}

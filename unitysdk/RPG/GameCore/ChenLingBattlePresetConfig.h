#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingBattlePresetArmyConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEPRESETCONFIG_METHOD_2_F97AD85ACBA2A274_OFFSET UNITYSDK_OFFSET(0x1CFAC220)
#define RPG_GAMECORE_CHENLINGBATTLEPRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFAC380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattlePresetConfig_TypeDefinitionIndex = 15517;

	class ChenLingBattlePresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChenLingBattlePresetArmyConfig*>* AllyConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::ChenLingBattlePresetArmyConfig*>* EnemyConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F97AD85ACBA2A274(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattlePresetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattlePresetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPRESETCONFIG_METHOD_2_F97AD85ACBA2A274_OFFSET))(a1, a2);
		}
	};
}

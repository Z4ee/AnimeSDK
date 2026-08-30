#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class RoadRashGameAbilityConfig; }
namespace RPG::GameCore { class RoadRashGameModifierConfig; }

#define RPG_GAMECORE_ROADRASHGAMESKILLCONFIG_METHOD_2_166604D15A3447A5_OFFSET UNITYSDK_OFFSET(0x1D3B63B0)
#define RPG_GAMECORE_ROADRASHGAMESKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B67A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoadRashGameSkillConfig_TypeDefinitionIndex = 16814;

	class RoadRashGameSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RoadRashGameAbilityConfig* ChargingAbility; // 0x10
		::RPG::GameCore::RoadRashGameAbilityConfig* ReleaseChargingAbility; // 0x18
		::RPG::GameCore::RoadRashGameAbilityConfig* FireProjectileCastAbility; // 0x20
		::RPG::GameCore::RoadRashGameAbilityConfig* FireProjectileAbility; // 0x28
		::RPG::GameCore::RoadRashGameAbilityConfig* SlamCastAbility; // 0x30
		::RPG::GameCore::RoadRashGameAbilityConfig* SlamAbility; // 0x38
		::RPG::GameCore::RoadRashGameAbilityConfig* UltimateAbility; // 0x40
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* FireTargetSelector; // 0x48
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* SlamTargetSelector; // 0x50
		::Il2CppArray<::RPG::GameCore::RoadRashGameModifierConfig*>* Modifiers; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMESKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_166604D15A3447A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoadRashGameSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoadRashGameSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMESKILLCONFIG_METHOD_2_166604D15A3447A5_OFFSET))(a1, a2);
		}
	};
}

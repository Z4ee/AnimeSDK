#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA956820)
#define RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS14_0__PRECHECKSKILLFORCESTANCEDAMAGE_B__0_OFFSET UNITYSDK_OFFSET(0xA961950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GamePlayStatic___c__DisplayClass14_0_TypeDefinitionIndex = 47719;

	class GamePlayStatic___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedAbilityComponent* pTargetTurnBasedAbility; // 0x10
		::RPG::GameCore::TurnBasedAbilityComponent* pAttackerTurnBasedAbility; // 0x18
		::RPG::GameCore::SkillConfig* pSkillJsonConfig; // 0x20
		::System::Boolean forceStanceDamage; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _PreCheckSkillForceStanceDamage_b__0(::RPG::GameCore::TurnBasedModifierInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS14_0__PRECHECKSKILLFORCESTANCEDAMAGE_B__0_OFFSET))(this, instance);
		}
	};
}

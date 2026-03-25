#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA954860)
#define RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS7_0__SOLVESTANCEWEAKNESSPRESHOW_B__0_OFFSET UNITYSDK_OFFSET(0xA961AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GamePlayStatic___c__DisplayClass7_0_TypeDefinitionIndex = 47720;

	class GamePlayStatic___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedAbilityComponent* pAttackerAbilityCharacter; // 0x10
		::RPG::GameCore::TurnBasedAbilityComponent* pTargetTurnBasedAbility; // 0x18
		::RPG::GameCore::SkillConfig* pSkillConfig; // 0x20
		::RPG::GameCore::AttackDamageType addweaknessList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _SolveStanceWeaknessPreshow_b__0(::RPG::GameCore::TurnBasedModifierInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS7_0__SOLVESTANCEWEAKNESSPRESHOW_B__0_OFFSET))(this, instance);
		}
	};
}

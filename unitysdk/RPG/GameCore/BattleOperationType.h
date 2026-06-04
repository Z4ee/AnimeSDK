#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleOperationType_TypeDefinitionIndex = 17385;

	enum class BattleOperationType : ::System::Int32
	{
		Null = 0,
		AttackButton = 1,
		SkillButton = 2,
		ActionButton = 3,
		AttackActionButton = 4,
		SkillActionButton = 5,
		UltraActionButton = 6,
		UltraButton1 = 7,
		UltraButton2 = 8,
		UltraButton3 = 9,
		UltraButton4 = 10,
		ChangeTarget = 11,
		UIOperation = 12,
		BattleEventButton = 13,
		UltraTrigger = 14,
		UltraButtonByFormationIndex = 15,
		SpecialCustomButton = 16,
		Count = 17,
	};
}

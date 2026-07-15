#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatModifierFlag_TypeDefinitionIndex = 15449;

	enum class DiceCombatModifierFlag : ::System::Int32
	{
		WeatherEffect = 1,
		CannotRollMax = 2,
		CannotRollMin = 3,
		CannotRollPoint1 = 4,
		CannotRollPoint2 = 5,
		AttackIgnoreDefPoint = 6,
		AttackIgnoreAtkPoint = 7,
		KeepAlive = 8,
		DiceMustSelected = 9,
		KeepCrossPhase = 10,
		BossSelectHighDefendPointToAttack = 11,
		AlwaysRollMax = 12,
		UnlimitedConfirmDiceCountOnAttack = 13,
		Count = 14,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraModifierType_TypeDefinitionIndex = 15210;

	enum class ChimeraModifierType : ::System::Int32
	{
		None = 0,
		ChangeAttack = 1,
		ChangeHP = 2,
		SetHP = 3,
		ChangeHPOnAttackPercent = 4,
		ChangePositionInTeam = 5,
		ChangeHPButNotLessThen = 6,
		BringTeammateOut = 7,
		RaiseOnNoAbilityMember = 8,
		AbsorbNoAbilityMember = 9,
	};
}

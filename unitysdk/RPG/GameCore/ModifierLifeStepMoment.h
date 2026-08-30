#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierLifeStepMoment_TypeDefinitionIndex = 18011;

	enum class ModifierLifeStepMoment : ::System::Int32
	{
		Unknow = 0,
		ModifierPhase1End = 1,
		ModifierPhase2End = 2,
		CasterModifierPhase1End = 3,
		ActionPhaseEnd = 4,
		TurnEnd = 5,
		RoundEnd = 6,
	};
}

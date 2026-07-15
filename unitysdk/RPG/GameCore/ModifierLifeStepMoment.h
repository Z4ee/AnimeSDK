#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierLifeStepMoment_TypeDefinitionIndex = 17494;

	enum class ModifierLifeStepMoment : ::System::Int32
	{
		Unknow = 0,
		ModifierPhase1End = 1,
		ModifierPhase2End = 2,
		ActionPhaseEnd = 3,
		TurnEnd = 4,
		RoundEnd = 5,
	};
}

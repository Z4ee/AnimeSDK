#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackEffectTriggerAt_TypeDefinitionIndex = 58688;

	enum class AttackEffectTriggerAt : ::System::Int32
	{
		TriggerAtHitPoint = 1,
		TriggerAtHitPointRandom = 2,
		TriggerAtSelfCoordinate = 3,
		TriggerAtEntity = 0,
	};
}

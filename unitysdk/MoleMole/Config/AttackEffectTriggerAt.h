#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackEffectTriggerAt_TypeDefinitionIndex = 80106;

	enum class AttackEffectTriggerAt : ::System::Int32
	{
		TriggerAtSelfCoordinate = 3,
		TriggerAtHitPoint = 1,
		TriggerAtHitPointRandom = 2,
		TriggerAtEntity = 0,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackEffectTriggerAt_TypeDefinitionIndex = 46662;

	enum class AttackEffectTriggerAt : ::System::Int32
	{
		TriggerAtSelfCoordinate = 3,
		TriggerAtEntity = 0,
		TriggerAtHitPointRandom = 2,
		TriggerAtHitPoint = 1,
	};
}

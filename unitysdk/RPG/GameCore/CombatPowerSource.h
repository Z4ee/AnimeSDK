#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CombatPowerSource_TypeDefinitionIndex = 56398;

	enum class CombatPowerSource : ::System::Int32
	{
		Avatar = 0,
		SkillTree = 1,
		Lightcone = 2,
		Relic = 3,
	};
}

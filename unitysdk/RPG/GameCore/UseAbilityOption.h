#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int UseAbilityOption_TypeDefinitionIndex = 51931;

	enum class UseAbilityOption : ::System::UInt32
	{
		None = 0x0,
		ParallelExecuting = 0x1,
		PrepareAbility = 0x2,
		UseInSkill = 0x4,
	};
}

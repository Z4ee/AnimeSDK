#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionDelayEffectType_TypeDefinitionIndex = 23881;

	enum class ActionDelayEffectType : ::System::Int32
	{
		ActionDelayChange = 0,
		SpeedChange = 1,
		SkillDelayCostApply = 2,
	};
}

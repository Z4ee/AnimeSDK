#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRewardType_TypeDefinitionIndex = 11036;

	enum class EvolveBuildRewardType : ::System::Int32
	{
		EXP_REWARD_ONCE = 0,
		EXP_REWARD_TAIL = 1,
	};
}

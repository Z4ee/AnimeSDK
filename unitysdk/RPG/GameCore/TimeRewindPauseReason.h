#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindPauseReason_TypeDefinitionIndex = 23661;

	enum class TimeRewindPauseReason : ::System::Int32
	{
		Default = 0,
		Task = 1,
		Skill = 2,
		PauseItem = 3,
	};
}

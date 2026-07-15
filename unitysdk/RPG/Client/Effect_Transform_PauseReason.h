#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_Transform_PauseReason_TypeDefinitionIndex = 67410;

	enum class Effect_Transform_PauseReason : ::System::Int32
	{
		TimeRewindPause = 0,
		Floating = 1,
	};
}

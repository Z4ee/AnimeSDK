#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PauseGameMode_TypeDefinitionIndex = 73041;

	enum class PauseGameMode : ::System::Int32
	{
		Inherit = 0,
		Resume = 1,
		Pause = 2,
	};
}

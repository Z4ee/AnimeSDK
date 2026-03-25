#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PauseRegionManagerReason_TypeDefinitionIndex = 50493;

	enum class PauseRegionManagerReason : ::System::Int32
	{
		Default = 0,
		Puzzle = 1,
		LeaveDefaultArea = 2,
	};
}

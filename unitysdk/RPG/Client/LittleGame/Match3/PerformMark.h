#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int PerformMark_TypeDefinitionIndex = 40452;

	enum class PerformMark : ::System::Int32
	{
		None = 0,
		Fall = 1,
		Appear = 2,
		Refresh = 3,
		Swap = 4,
		SwapReset = 5,
	};
}

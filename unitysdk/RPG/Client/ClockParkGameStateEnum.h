#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkGameStateEnum_TypeDefinitionIndex = 58762;

	enum class ClockParkGameStateEnum : ::System::Int32
	{
		None = 0,
		SelectStartChapter = 1,
		Story = 2,
		RandomEvent = 3,
		BranchSelect = 4,
		MovieGame = 5,
		SlotMachine = 6,
		Check = 7,
	};
}

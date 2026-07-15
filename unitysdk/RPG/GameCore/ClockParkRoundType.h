#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkRoundType_TypeDefinitionIndex = 10766;

	enum class ClockParkRoundType : ::System::Int32
	{
		Normal = 0,
		Battle = 1,
		MovieGame = 2,
		HanuShooting = 3,
		SlotMachine = 4,
		BranchSelect = 5,
	};
}

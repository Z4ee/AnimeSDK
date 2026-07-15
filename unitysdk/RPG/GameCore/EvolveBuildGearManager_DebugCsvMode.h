#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_DebugCsvMode_TypeDefinitionIndex = 53532;

	enum class EvolveBuildGearManager_DebugCsvMode : ::System::Int32
	{
		Gear = 0,
		Card = 1,
		Treasure = 2,
		PieceCount = 3,
	};
}

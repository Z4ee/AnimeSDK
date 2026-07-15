#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildTreasureType_TypeDefinitionIndex = 23760;

	enum class EvolveBuildTreasureType : ::System::Int32
	{
		StageEnd = 0,
		DemonKing = 1,
		Card = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DungeonDifficultyType_TypeDefinitionIndex = 52070;

	enum class DungeonDifficultyType : ::System::Int32
	{
		BangkovNormal = 0,
		BangkovDark = 1,
	};
}

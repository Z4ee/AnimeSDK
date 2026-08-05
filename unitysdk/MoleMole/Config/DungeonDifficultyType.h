#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DungeonDifficultyType_TypeDefinitionIndex = 73125;

	enum class DungeonDifficultyType : ::System::Int32
	{
		BangkovDark = 1,
		BangkovNormal = 0,
	};
}

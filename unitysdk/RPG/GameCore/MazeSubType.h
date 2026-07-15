#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeSubType_TypeDefinitionIndex = 13517;

	enum class MazeSubType : ::System::Int32
	{
		Unknown = 0,
		Mainline = 1,
		Raid = 2,
		Material = 3,
		Rogue = 4,
		Tower = 5,
	};
}

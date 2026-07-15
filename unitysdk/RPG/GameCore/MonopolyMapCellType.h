#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyMapCellType_TypeDefinitionIndex = 15592;

	enum class MonopolyMapCellType : ::System::Int32
	{
		Unknown = 0,
		Event = 1,
		Asset = 2,
		Shop = 3,
		Game = 4,
		Click = 5,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyDisplayCellType_TypeDefinitionIndex = 11417;

	enum class MonopolyDisplayCellType : ::System::Int32
	{
		Default = 0,
		Common = 1,
		Asset = 2,
		Game = 3,
	};
}

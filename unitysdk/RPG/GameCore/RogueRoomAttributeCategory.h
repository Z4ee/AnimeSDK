#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueRoomAttributeCategory_TypeDefinitionIndex = 10245;

	enum class RogueRoomAttributeCategory : ::System::Int32
	{
		None = 0,
		Positive = 1,
		Negative = 2,
		Special = 3,
		Tutorial = 4,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessRogueAreaGroupID_TypeDefinitionIndex = 14175;

	enum class ChessRogueAreaGroupID : ::System::Int32
	{
		None = 0,
		Guide = 1,
		Formal = 2,
	};
}

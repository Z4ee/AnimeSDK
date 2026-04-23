#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessRogueAreaGroupID_TypeDefinitionIndex = 13961;

	enum class ChessRogueAreaGroupID : ::System::Int32
	{
		None = 0,
		Guide = 1,
		Formal = 2,
	};
}

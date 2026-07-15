#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleCommandType_TypeDefinitionIndex = 60665;

	enum class ChimeraSettleCommandType : ::System::Int32
	{
		Default = 0,
		Arrangement = 1,
		EndlessHint = 2,
		Entrance = 3,
		Evaluation = 4,
		Goal = 5,
		Maze = 6,
	};
}

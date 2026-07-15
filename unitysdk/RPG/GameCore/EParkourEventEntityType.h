#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EParkourEventEntityType_TypeDefinitionIndex = 11638;

	enum class EParkourEventEntityType : ::System::Int32
	{
		None = 0,
		Any = 1,
		AI = 2,
		RailBall = 3,
	};
}

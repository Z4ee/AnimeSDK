#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenWorkType_TypeDefinitionIndex = 11209;

	enum class HipplenWorkType : ::System::Int32
	{
		None = 0,
		MiniGame = 1,
		Interaction = 2,
		Incident = 3,
		Performance = 4,
	};
}

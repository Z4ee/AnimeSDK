#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TABehaviorTickMode_TypeDefinitionIndex = 67611;

	enum class TABehaviorTickMode : ::System::Int32
	{
		TickPerFrame = 0,
		TickLOD = 1,
	};
}

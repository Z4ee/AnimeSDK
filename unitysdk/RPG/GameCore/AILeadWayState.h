#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AILeadWayState_TypeDefinitionIndex = 49087;

	enum class AILeadWayState : ::System::Int32
	{
		Move = 0,
		Wait = 1,
		Repath = 2,
		Dither = 3,
	};
}

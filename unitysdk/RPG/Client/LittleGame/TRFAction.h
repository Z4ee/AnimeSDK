#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TRFAction_TypeDefinitionIndex = 40261;

	enum class TRFAction : ::System::Int32
	{
		None = 0,
		Move = 1,
		Fall = 2,
		Climb = 3,
		FallOut = 4,
	};
}

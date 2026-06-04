#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleMode_TypeDefinitionIndex = 62864;

	enum class RogueGambleMode : ::System::Int32
	{
		Unknow = 0,
		Tourn = 1,
		Magic = 2,
	};
}

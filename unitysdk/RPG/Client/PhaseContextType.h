#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PhaseContextType_TypeDefinitionIndex = 58380;

	enum class PhaseContextType : ::System::Int32
	{
		Empty = 0,
		Login = 1,
		Game = 2,
		LocalGame = 3,
	};
}

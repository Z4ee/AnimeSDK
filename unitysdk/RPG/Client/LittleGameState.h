#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LittleGameState_TypeDefinitionIndex = 57844;

	enum class LittleGameState : ::System::Int32
	{
		Invalid = 0,
		Ready = 1,
		Start = 2,
		Stop = 3,
	};
}

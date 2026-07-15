#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceAIState_TypeDefinitionIndex = 17683;

	enum class CakeRaceAIState : ::System::Int32
	{
		Wait = 0,
		Turn = 1,
		Move = 2,
		Lock = 3,
		Idle = 4,
		Fall = 5,
		Transfer = 6,
		Float = 7,
	};
}

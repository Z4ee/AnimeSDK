#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceAnimState_TypeDefinitionIndex = 17684;

	enum class CakeRaceAnimState : ::System::Int32
	{
		Unknown = 0,
		Wait = 1,
		Turn = 2,
		Move = 3,
		Hit = 4,
		Lock = 5,
		Idle = 6,
		Fall = 7,
		Transfer = 8,
		ChargedMove = 9,
	};
}

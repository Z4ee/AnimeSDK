#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleResultState_TypeDefinitionIndex = 56240;

	enum class BattleResultState : ::System::Int32
	{
		Win = 0,
		Lose = 1,
		Quit = 2,
		Error = 3,
		KickOut = 4,
		OutOfDate = 5,
	};
}

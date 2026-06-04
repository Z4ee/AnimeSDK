#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int DuelChimeraState_TypeDefinitionIndex = 38712;

	enum class DuelChimeraState : ::System::Int32
	{
		Invalid = 0,
		Alive = 1,
		WillDie = 2,
		Dead = 3,
		WaitSummon = 4,
	};
}

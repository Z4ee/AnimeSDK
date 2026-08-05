#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAliveState_TypeDefinitionIndex = 46890;

	enum class CharacterAliveState : ::System::Int32
	{
		Dying = 4,
		ExecuteCore = 2,
		Unknown = -1,
		Dead = 3,
		MPDying = 5,
		Alive = 0,
		DeadForHit = 1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAliveState_TypeDefinitionIndex = 82320;

	enum class CharacterAliveState : ::System::Int32
	{
		Dead = 3,
		MPDying = 5,
		Alive = 0,
		Dying = 4,
		DeadForHit = 1,
		Unknown = -1,
		ExecuteCore = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAliveState_TypeDefinitionIndex = 60818;

	enum class CharacterAliveState : ::System::Int32
	{
		DeadForHit = 1,
		Unknown = -1,
		Dying = 4,
		ExecuteCore = 2,
		MPDying = 5,
		Alive = 0,
		Dead = 3,
	};
}

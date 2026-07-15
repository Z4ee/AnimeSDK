#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournPersonaStyleGiftRarityType_TypeDefinitionIndex = 10270;

	enum class RogueTournPersonaStyleGiftRarityType : ::System::Int32
	{
		None = 0,
		Common = 1,
		Rare = 2,
		Epic = 3,
		Core = 4,
	};
}

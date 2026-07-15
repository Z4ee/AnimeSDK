#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournRoomType_TypeDefinitionIndex = 10247;

	enum class RogueTournRoomType : ::System::Int32
	{
		Unknown = 0,
		Boss = 1,
		Elite = 2,
		Battle = 3,
		Encounter = 4,
		Event = 5,
		Coin = 6,
		Shop = 7,
		Reward = 8,
		Adventure = 9,
		Respite = 10,
		Reforge = 11,
		Hidden = 12,
		Conversion = 13,
		Blank = 14,
	};
}

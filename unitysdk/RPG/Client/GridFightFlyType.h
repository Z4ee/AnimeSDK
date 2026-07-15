#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlyType_TypeDefinitionIndex = 61569;

	enum class GridFightFlyType : ::System::Int32
	{
		Default = 0,
		Rank1 = 1,
		Rank2 = 2,
		Rank3 = 3,
		Rank4 = 4,
		Rank5 = 5,
		Rank6 = 6,
		Cyrene = 7,
		Upgrade = 8,
		Equip = 9,
		Buy = 10,
		Gold = 11,
		FastGold = 12,
	};
}

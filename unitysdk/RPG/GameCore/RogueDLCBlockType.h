#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBlockType_TypeDefinitionIndex = 10230;

	enum class RogueDLCBlockType : ::System::Int32
	{
		Empty = 1,
		Respite = 2,
		MonsterNormal = 3,
		MonsterSwarm = 4,
		MonsterElite = 5,
		Adventure = 6,
		Reward = 7,
		Event = 8,
		SwarmEvent = 9,
		Trap = 10,
		MonsterBoss = 11,
		MonsterSwarmBoss = 12,
		Trade = 13,
		BlackMarket = 14,
		MonsterNousBoss = 15,
		NousEvent = 16,
		NousSpecialEvent = 17,
	};
}

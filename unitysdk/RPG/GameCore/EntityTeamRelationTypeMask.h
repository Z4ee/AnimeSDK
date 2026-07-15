#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityTeamRelationTypeMask_TypeDefinitionIndex = 10087;

	enum class EntityTeamRelationTypeMask : ::System::UInt32
	{
		None = 0x0,
		All = 0xFFFFFFFF,
		Self = 0x1,
		Summoner = 0x2,
		FriendExcludeSummoner = 0x4,
		Enemy = 0x8,
		Friend = 0x6,
		SelfTeam = 0x7,
	};
}

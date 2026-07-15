#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MapEntityType_TypeDefinitionIndex = 59351;

	enum class MapEntityType : ::System::Int32
	{
		None = 0,
		Npc = 1,
		NpcMonster = 2,
		Prop = 3,
		District = 4,
		SummonUnit = 5,
	};
}

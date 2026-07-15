#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityScoreType_TypeDefinitionIndex = 15920;

	enum class EntityScoreType : ::System::Int32
	{
		Player = 0,
		Npc = 1,
		NpcMonster = 2,
		AssemblyNpc = 3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace Proto
{
	inline static constexpr unsigned int SceneEntityInfo_EntityOneofCase_TypeDefinitionIndex = 27020;

	enum class SceneEntityInfo_EntityOneofCase : ::System::Int32
	{
		None = 0,
		Actor = 1,
		NpcMonster = 11,
		Npc = 12,
		Prop = 8,
		SummonUnit = 6,
	};
}

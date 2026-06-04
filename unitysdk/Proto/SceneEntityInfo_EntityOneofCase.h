#pragma once
#include "unitysdk/unitysdk.h"

namespace Proto
{
	inline static constexpr unsigned int SceneEntityInfo_EntityOneofCase_TypeDefinitionIndex = 32137;

	enum class SceneEntityInfo_EntityOneofCase : ::System::Int32
	{
		None = 0,
		Actor = 12,
		NpcMonster = 5,
		Npc = 1,
		Prop = 14,
		SummonUnit = 15,
	};
}

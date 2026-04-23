#pragma once
#include "unitysdk/unitysdk.h"

namespace Proto
{
	inline static constexpr unsigned int SceneEntityInfo_EntityOneofCase_TypeDefinitionIndex = 32028;

	enum class SceneEntityInfo_EntityOneofCase : ::System::Int32
	{
		None = 0,
		Actor = 1,
		NpcMonster = 9,
		Npc = 8,
		Prop = 3,
		SummonUnit = 11,
	};
}

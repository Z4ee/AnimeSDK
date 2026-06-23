#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodManager_LODRenderRulePriority_TypeDefinitionIndex = 44642;

	enum class NPCCrowdLodManager_LODRenderRulePriority : ::System::Int32
	{
		High = 300,
		Normal = 200,
		SpawnPathGraph = 250,
		Lowest = 0,
		Low = 100,
		Highest = 400,
	};
}

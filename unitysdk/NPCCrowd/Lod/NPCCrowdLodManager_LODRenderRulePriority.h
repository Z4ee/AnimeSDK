#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodManager_LODRenderRulePriority_TypeDefinitionIndex = 57940;

	enum class NPCCrowdLodManager_LODRenderRulePriority : ::System::Int32
	{
		SpawnPathGraph = 250,
		Low = 100,
		Normal = 200,
		Lowest = 0,
		Highest = 400,
		High = 300,
	};
}

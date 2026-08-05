#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleMainSystem_EModulePreloadPhase_TypeDefinitionIndex = 41871;

	enum class NPCCrowdModuleMainSystem_EModulePreloadPhase : ::System::Int32
	{
		PreloadAssetFinished = 2,
		StartPreloadAsset = 1,
		PreloadEnd = 3,
		None = 0,
	};
}

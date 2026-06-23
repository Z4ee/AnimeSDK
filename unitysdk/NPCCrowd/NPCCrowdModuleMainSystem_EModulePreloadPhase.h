#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleMainSystem_EModulePreloadPhase_TypeDefinitionIndex = 42357;

	enum class NPCCrowdModuleMainSystem_EModulePreloadPhase : ::System::Int32
	{
		PreloadAssetFinished = 2,
		None = 0,
		StartPreloadAsset = 1,
		PreloadEnd = 3,
	};
}

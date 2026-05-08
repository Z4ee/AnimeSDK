#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleMainSystem_EModulePreloadPhase_TypeDefinitionIndex = 63040;

	enum class NPCCrowdModuleMainSystem_EModulePreloadPhase : ::System::Int32
	{
		None = 0,
		StartPreloadAsset = 1,
		PreloadEnd = 3,
		PreloadAssetFinished = 2,
	};
}

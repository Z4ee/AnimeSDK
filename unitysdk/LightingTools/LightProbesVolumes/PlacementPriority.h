#pragma once
#include "unitysdk/unitysdk.h"

namespace LightingTools::LightProbesVolumes
{
	inline static constexpr unsigned int PlacementPriority_TypeDefinitionIndex = 90514;

	enum class PlacementPriority : ::System::Int32
	{
		Blocker = 0,
		High = 1,
		Medium = 2,
		Low = 3,
		LightingBlocker = 4,
	};
}

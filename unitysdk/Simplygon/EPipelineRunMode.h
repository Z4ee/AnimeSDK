#pragma once
#include "unitysdk/unitysdk.h"

namespace Simplygon
{
	inline static constexpr unsigned int EPipelineRunMode_TypeDefinitionIndex = 29547;

	enum class EPipelineRunMode : ::System::Int32
	{
		RunInThisProcess = 0,
		RunInNewProcess = 1,
		RunDistributedUsingSimplygonGrid = 2,
		RunDistributedUsingIncredibuild = 3,
		RunDistributedUsingFastbuild = 4,
	};
}

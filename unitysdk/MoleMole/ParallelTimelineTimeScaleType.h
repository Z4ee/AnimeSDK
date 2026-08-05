#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ParallelTimelineTimeScaleType_TypeDefinitionIndex = 45190;

	enum class ParallelTimelineTimeScaleType : ::System::Int32
	{
		WorldTimeScaleIgnoreWitch = 1,
		WorldTimeScale = 0,
		IgnoreWorldTimeScale = 2,
	};
}

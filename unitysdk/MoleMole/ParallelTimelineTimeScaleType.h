#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ParallelTimelineTimeScaleType_TypeDefinitionIndex = 51603;

	enum class ParallelTimelineTimeScaleType : ::System::Int32
	{
		WorldTimeScale = 0,
		WorldTimeScaleIgnoreWitch = 1,
		IgnoreWorldTimeScale = 2,
	};
}

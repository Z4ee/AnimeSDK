#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int EndOfFramePhase_TypeDefinitionIndex = 8639;

	enum class EndOfFramePhase : ::System::Int32
	{
		UpdateGameplayTag = 0,
		Count = 1,
		UpdateTimestamp = 1,
	};
}

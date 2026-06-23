#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int EndOfFramePhase_TypeDefinitionIndex = 8750;

	enum class EndOfFramePhase : ::System::Int32
	{
		Count = 1,
		UpdateTimestamp = 1,
		UpdateGameplayTag = 0,
	};
}

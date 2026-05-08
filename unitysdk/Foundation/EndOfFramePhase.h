#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int EndOfFramePhase_TypeDefinitionIndex = 9197;

	enum class EndOfFramePhase : ::System::Int32
	{
		UpdateGameplayTag = 0,
		UpdateTimestamp = 1,
		Count = 1,
	};
}

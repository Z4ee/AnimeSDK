#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int RandomSelectType_TypeDefinitionIndex = 42119;

	enum class RandomSelectType : ::System::Int32
	{
		RandomByWeight = 0,
		RandomIgnoreWeight = 1,
	};
}

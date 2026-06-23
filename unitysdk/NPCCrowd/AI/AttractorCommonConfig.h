#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorCommonConfig_TypeDefinitionIndex = 53685;

	struct alignas(4) AttractorCommonConfig
	{
		::System::Single NPCAttractCD; // 0x10
		::System::Single AttractorHeightLimit; // 0x14
		::System::Single AttractorPathFindHeightLimit; // 0x18
	};
}

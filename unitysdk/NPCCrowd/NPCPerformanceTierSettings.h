#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPerformanceTierSettings_TypeDefinitionIndex = 65032;

	struct alignas(4) NPCPerformanceTierSettings
	{
		::System::Single scoreThreshold; // 0x10
		::System::Int32 baseCrowdCount; // 0x14
	};
}

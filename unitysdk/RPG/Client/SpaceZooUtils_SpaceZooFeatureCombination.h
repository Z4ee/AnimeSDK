#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooUtils_SpaceZooFeatureCombination_TypeDefinitionIndex = 64964;

	struct alignas(4) SpaceZooUtils_SpaceZooFeatureCombination
	{
		::System::UInt32 BodyDecalFeatureID; // 0x10
		::System::UInt32 BodyColorFeatureID; // 0x14
		::System::UInt32 HatColorFeatureID; // 0x18
	};
}

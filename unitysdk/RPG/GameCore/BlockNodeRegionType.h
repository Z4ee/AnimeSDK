#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockNodeRegionType_TypeDefinitionIndex = 23100;

	enum class BlockNodeRegionType : ::System::Int32
	{
		Near = 0,
		Middle = 1,
		Far = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPGTools::Octree::Agent
{
	inline static constexpr unsigned int AgentNavigationParams_TypeDefinitionIndex = 47088;

	struct alignas(4) AgentNavigationParams
	{
		::System::Single Tolerance; // 0x10
	};
}

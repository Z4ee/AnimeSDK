#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipType_TypeDefinitionIndex = 10118;

	enum class PerformanceSkipType : ::System::Int32
	{
		Never = 0,
		AfterSeen = 1,
		Always = 2,
	};
}

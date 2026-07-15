#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceLoadType_TypeDefinitionIndex = 10133;

	enum class PerformanceLoadType : ::System::Int32
	{
		ByScreenTransfer = 0,
		AlwaysAsync = 1,
		AlwaysSync = 2,
		InValid = 99,
	};
}

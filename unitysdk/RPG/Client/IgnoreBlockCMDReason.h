#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int IgnoreBlockCMDReason_TypeDefinitionIndex = 66284;

	enum class IgnoreBlockCMDReason : ::System::Int32
	{
		None = 0,
		Battle = 1,
		Loading = 2,
		PerformanceReplay = 4,
	};
}

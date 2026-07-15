#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPerformanceHideType_TypeDefinitionIndex = 16502;

	enum class LevelPerformanceHideType : ::System::UInt16
	{
		A = 0x1,
		C = 0x2,
		D = 0x4,
		E = 0x8,
	};
}

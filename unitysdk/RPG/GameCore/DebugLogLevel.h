#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebugLogLevel_TypeDefinitionIndex = 22751;

	enum class DebugLogLevel : ::System::Int32
	{
		Info = 0,
		Warn = 1,
		Error = 2,
	};
}

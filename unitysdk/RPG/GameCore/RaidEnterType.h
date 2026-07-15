#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidEnterType_TypeDefinitionIndex = 14008;

	enum class RaidEnterType : ::System::Int32
	{
		Default = 0,
		SkipUI = 1,
		Performance = 2,
	};
}

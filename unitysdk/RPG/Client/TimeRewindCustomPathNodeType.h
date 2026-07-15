#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindCustomPathNodeType_TypeDefinitionIndex = 60972;

	enum class TimeRewindCustomPathNodeType : ::System::Int32
	{
		Stable = 0,
		Transition = 1,
	};
}

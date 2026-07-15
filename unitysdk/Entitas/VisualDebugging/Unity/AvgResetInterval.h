#pragma once
#include "unitysdk/unitysdk.h"

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int AvgResetInterval_TypeDefinitionIndex = 9722;

	enum class AvgResetInterval : ::System::Int32
	{
		Always = 1,
		VeryFast = 30,
		Fast = 60,
		Normal = 120,
		Slow = 300,
		Never = 2147483647,
	};
}

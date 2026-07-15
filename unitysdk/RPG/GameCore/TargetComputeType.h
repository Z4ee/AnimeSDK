#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetComputeType_TypeDefinitionIndex = 23925;

	enum class TargetComputeType : ::System::Int32
	{
		Concat = 0,
		Union = 1,
		Intersect = 2,
		Minus = 3,
	};
}

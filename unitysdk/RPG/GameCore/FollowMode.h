#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FollowMode_TypeDefinitionIndex = 23597;

	enum class FollowMode : ::System::Int32
	{
		DefaultNpc = 0,
		Puppy = 1,
	};
}

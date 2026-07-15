#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_FollowMode_TypeDefinitionIndex = 23612;

	enum class ST_FollowMode : ::System::Int32
	{
		DefaultNpc = 0,
		Puppy = 1,
		ZhangZhang = 2,
		PacMan = 3,
	};
}

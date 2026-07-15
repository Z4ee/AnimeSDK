#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterMotionMode_TypeDefinitionIndex = 10091;

	enum class CharacterMotionMode : ::System::Int32
	{
		Default = 0,
		ForceWalk = 1,
		ForceRun = 2,
		ForbidFastRun = 3,
		ForbidWalk = 4,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterMotionFlag_TypeDefinitionIndex = 10090;

	enum class CharacterMotionFlag : ::System::Int32
	{
		None = 0,
		Walk = 1,
		Run = 2,
		FastRun = 3,
	};
}

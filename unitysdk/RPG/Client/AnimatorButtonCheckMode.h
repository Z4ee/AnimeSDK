#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AnimatorButtonCheckMode_TypeDefinitionIndex = 69227;

	enum class AnimatorButtonCheckMode : ::System::Int32
	{
		Defualt = 0,
		UsingChecker = 1,
		EnableClick = 2,
	};
}

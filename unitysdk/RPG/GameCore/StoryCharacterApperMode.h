#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryCharacterApperMode_TypeDefinitionIndex = 57511;

	enum class StoryCharacterApperMode : ::System::Int32
	{
		Dither = 0,
		OnlyEffect = 1,
		DirectlySetDither = 2,
	};
}

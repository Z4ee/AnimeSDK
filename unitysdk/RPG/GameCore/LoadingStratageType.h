#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingStratageType_TypeDefinitionIndex = 10215;

	enum class LoadingStratageType : ::System::Int32
	{
		Default = 0,
		Legacy = 1,
		StoryLine = 2,
		PamSnore = 3,
		EnterDream = 4,
		ExitDream = 5,
		Plain = 6,
		AmphoreusDay = 7,
		AmphoreusNight = 8,
		WhiteBackground = 9,
	};
}

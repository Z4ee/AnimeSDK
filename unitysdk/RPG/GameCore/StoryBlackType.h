#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryBlackType_TypeDefinitionIndex = 10117;

	enum class StoryBlackType : ::System::Int32
	{
		None = 0,
		Full = 1,
		NoPre = 2,
		NoPost = 3,
		NoPrePost = 4,
	};
}

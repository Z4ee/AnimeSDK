#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmotionID_TypeDefinitionIndex = 10561;

	enum class EmotionID : ::System::Int32
	{
		Default = 0,
		Angry = 1,
		Gentle = 2,
		Shy = 3,
		Surprise = 4,
		Trouble = 5,
	};
}

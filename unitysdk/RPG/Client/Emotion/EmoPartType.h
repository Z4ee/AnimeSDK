#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Emotion
{
	inline static constexpr unsigned int EmoPartType_TypeDefinitionIndex = 60283;

	enum class EmoPartType : ::System::Int32
	{
		LeftBrow = 0,
		RightBrow = 1,
		LeftEye = 2,
		RightEye = 3,
		Mouth = 4,
		Count = 5,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmotionEnum_TypeDefinitionIndex = 16062;

	enum class EmotionEnum : ::System::Int32
	{
		Normal = 0,
		Happy = 1,
		Angry = 2,
		Sad = 3,
		Surprise = 4,
		Fear = 5,
		Doubt = 6,
		Whistle = 7,
	};
}

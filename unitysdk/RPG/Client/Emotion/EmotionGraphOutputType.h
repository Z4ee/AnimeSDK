#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Emotion
{
	inline static constexpr unsigned int EmotionGraphOutputType_TypeDefinitionIndex = 73461;

	enum class EmotionGraphOutputType : ::System::Int32
	{
		Bow = 0,
		Eye = 1,
		Mouth = 2,
		Count = 3,
	};
}

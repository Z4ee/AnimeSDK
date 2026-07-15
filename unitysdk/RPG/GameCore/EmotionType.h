#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmotionType_TypeDefinitionIndex = 54684;

	enum class EmotionType : ::System::Int32
	{
		None = 0,
		PlayableGraph = 1,
		AnimatorLayer = 2,
		BlendShapes = 3,
	};
}

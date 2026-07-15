#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameFullScreenTranslateEffect_FadeState_TypeDefinitionIndex = 72695;

	enum class MovieGameFullScreenTranslateEffect_FadeState : ::System::Int32
	{
		None = 0,
		FadeIn = 1,
		FadeInComplete = 2,
		FadeOut = 3,
	};
}

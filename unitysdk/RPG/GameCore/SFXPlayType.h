#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SFXPlayType_TypeDefinitionIndex = 14824;

	enum class SFXPlayType : ::System::Int32
	{
		Cutscene = 0,
		CutsceneWithFade = 1,
		Story = 2,
		StoryWithFade = 3,
	};
}

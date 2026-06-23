#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController_ComicUIState_TypeDefinitionIndex = 46635;

	enum class UIComicPageController_ComicUIState : ::System::Byte
	{
		Playing = 0x3,
		TurnPage = 0x4,
		SwitchScenePlaying = 0x2,
		FadeIn = 0x1,
		None = 0x0,
		FadeOut = 0x5,
	};
}

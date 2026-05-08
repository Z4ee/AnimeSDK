#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController_ComicUIState_TypeDefinitionIndex = 40034;

	enum class UIComicPageController_ComicUIState : ::System::Byte
	{
		FadeIn = 0x1,
		None = 0x0,
		FadeOut = 0x5,
		SwitchScenePlaying = 0x2,
		TurnPage = 0x4,
		Playing = 0x3,
	};
}

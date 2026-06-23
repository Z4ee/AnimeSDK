#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController_FadeInMode_TypeDefinitionIndex = 46631;

	enum class UIComicPageController_FadeInMode : ::System::Byte
	{
		BlackMask = 0x1,
		Normal = 0x0,
		SpecialBlackMask = 0x3,
		WhiteMask = 0x2,
	};
}

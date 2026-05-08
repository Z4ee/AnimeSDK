#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController_FadeInMode_TypeDefinitionIndex = 40027;

	enum class UIComicPageController_FadeInMode : ::System::Byte
	{
		Normal = 0x0,
		BlackMask = 0x1,
		SpecialBlackMask = 0x2,
	};
}

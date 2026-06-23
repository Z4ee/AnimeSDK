#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController_FadeInMode_TypeDefinitionIndex = 54903;

	enum class UIGalgamePageController_FadeInMode : ::System::Byte
	{
		Normal = 0x0,
		GalConnectGal = 0x4,
		BlackMask = 0x1,
		SwitchScene = 0x2,
		SpecialBlackMask = 0x3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMonsterHudChildWindowControllerBase_HudFlag_TypeDefinitionIndex = 79017;

	enum class UIInLevelMonsterHudChildWindowControllerBase_HudFlag : ::System::Byte
	{
		FadeOut = 0x4,
		Hide = 0x8,
		WaitForShow = 0x1,
		Show = 0x2,
		Destroy = 0x10,
	};
}

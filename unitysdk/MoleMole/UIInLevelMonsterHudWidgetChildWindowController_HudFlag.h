#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMonsterHudWidgetChildWindowController_HudFlag_TypeDefinitionIndex = 39620;

	enum class UIInLevelMonsterHudWidgetChildWindowController_HudFlag : ::System::Int32
	{
		Lock = 2,
		StunDestroyDelay = 512,
		Hide = 16,
		PrepareDestroy = 64,
		Destroy = 32,
		StunFillGrey = 256,
		Show = 1,
		HeavyAttack = 8,
		Stun = 128,
		StunMax = 4,
	};
}

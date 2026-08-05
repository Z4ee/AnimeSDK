#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMonsterHudWidgetChildWindowController_HudFlag_TypeDefinitionIndex = 52340;

	enum class UIInLevelMonsterHudWidgetChildWindowController_HudFlag : ::System::Int32
	{
		StunMax = 4,
		PrepareDestroy = 64,
		Show = 1,
		Lock = 2,
		Hide = 16,
		HeavyAttack = 8,
		Destroy = 32,
		Stun = 128,
		StunFillGrey = 256,
		StunDestroyDelay = 512,
	};
}

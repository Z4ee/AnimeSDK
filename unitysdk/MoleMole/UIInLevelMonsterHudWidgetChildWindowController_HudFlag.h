#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMonsterHudWidgetChildWindowController_HudFlag_TypeDefinitionIndex = 64844;

	enum class UIInLevelMonsterHudWidgetChildWindowController_HudFlag : ::System::Int32
	{
		StunMax = 4,
		HeavyAttack = 8,
		PrepareDestroy = 64,
		Stun = 128,
		Hide = 16,
		StunFillGrey = 256,
		StunDestroyDelay = 512,
		Show = 1,
		Lock = 2,
		Destroy = 32,
	};
}

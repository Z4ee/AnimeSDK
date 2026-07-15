#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TransitionMode_TypeDefinitionIndex = 58126;

	enum class TransitionMode : ::System::Int32
	{
		Empty = 0,
		Universe3D = 1,
		ScreenCrack3D_Story = 2,
		ScreenCrack3D_Cocoon = 3,
		UniverseUI = 4,
		OnlineReplay = 5,
		Universe3D_AetherDivide = 6,
		ScreenSpecialFadeIn = 7,
	};
}

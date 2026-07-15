#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TransitionLoadingType_TypeDefinitionIndex = 16923;

	enum class TransitionLoadingType : ::System::Int32
	{
		Default = 0,
		UILoadingPage = 1,
		EnterRogueMap = 2,
		ExitRogueMap = 3,
		Loading3D = 4,
		RefreshLoading = 5,
		EnterRougueDLC1Dot3 = 6,
		ExitRougueDLC1Dot3 = 7,
		TeleportRougueDLC1Dot3 = 8,
		SwitchRougueDLC1Dot3 = 9,
		BetweenRotatableRegion = 10,
		BetweenRotatableRegionRogue = 11,
		FramePortalBetweenRotatableRegion = 12,
		EnterRogueTourn = 13,
		ExitRogueTourn = 14,
		SwitchRogueTourn = 15,
		ComicPortal = 16,
	};
}

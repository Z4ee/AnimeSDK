#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameOpertationType_TypeDefinitionIndex = 23693;

	enum class HipplenGameOpertationType : ::System::Int32
	{
		ClearBubble = 0,
		SettleMiniGame = 1,
		Run = 2,
		Walk = 3,
		Stop = 4,
		LoadMiniGameAtmosphere = 5,
		UnloadMiniGameAtmosphere = 6,
	};
}

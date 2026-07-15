#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRogueSelectMainPageModeType_TypeDefinitionIndex = 23944;

	enum class ShowRogueSelectMainPageModeType : ::System::Int32
	{
		SimulatedRogue = 1,
		RogueDLC = 2,
	};
}

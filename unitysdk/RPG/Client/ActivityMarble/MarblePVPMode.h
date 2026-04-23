#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPMode_TypeDefinitionIndex = 68960;

	enum class MarblePVPMode : ::System::Int32
	{
		FreeMatch = 0,
		Invitation = 1,
		MultiplayFreeMatch = 2,
		MultiplayInvitation = 3,
	};
}

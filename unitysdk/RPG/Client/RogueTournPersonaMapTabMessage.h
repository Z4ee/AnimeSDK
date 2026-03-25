#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaMapTabMessage_TypeDefinitionIndex = 59770;

	enum class RogueTournPersonaMapTabMessage : ::System::Int32
	{
		None = 0,
		OnSelectedRoomChanged = 1,
	};
}

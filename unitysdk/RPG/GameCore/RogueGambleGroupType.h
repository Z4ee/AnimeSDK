#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueGambleGroupType_TypeDefinitionIndex = 10254;

	enum class RogueGambleGroupType : ::System::Int32
	{
		None = 0,
		SideGamble = 1,
		SecretRoomGamble = 2,
		CoinRoomGamble = 3,
	};
}

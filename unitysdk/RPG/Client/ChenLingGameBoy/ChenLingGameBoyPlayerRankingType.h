#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ChenLingGameBoy
{
	inline static constexpr unsigned int ChenLingGameBoyPlayerRankingType_TypeDefinitionIndex = 69023;

	enum class ChenLingGameBoyPlayerRankingType : ::System::Int32
	{
		Self = 1,
		Friend = 2,
		NPC = 3,
	};
}

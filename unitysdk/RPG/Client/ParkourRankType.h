#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourRankType_TypeDefinitionIndex = 50213;

	enum class ParkourRankType : ::System::Int32
	{
		None = 0,
		Character = 1,
		Friend = 2,
		Player = 3,
	};
}

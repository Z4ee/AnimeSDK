#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RankType_TypeDefinitionIndex = 68682;

	enum class RankType : ::System::Int32
	{
		None = 0,
		SS = 1,
		S = 2,
		A = 3,
		B = 4,
		C = 5,
		NeedUpgrade = 6,
	};
}

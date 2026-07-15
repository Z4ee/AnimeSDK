#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidTagType_TypeDefinitionIndex = 14006;

	enum class RaidTagType : ::System::Int32
	{
		None = 0,
		NormalRaid = 1,
		HardRaid = 2,
		Hardest = 3,
	};
}

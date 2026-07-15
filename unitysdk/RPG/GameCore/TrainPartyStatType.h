#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyStatType_TypeDefinitionIndex = 10281;

	enum class TrainPartyStatType : ::System::Int32
	{
		None = 0,
		Average = 99,
		All = 100,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUnderlineParamType_TypeDefinitionIndex = 55368;

	enum class RogueTournUnderlineParamType : ::System::Int32
	{
		Miracle = 0,
		Buff = 1,
		Hex = 2,
		RoomCompositionType = 3,
		RoomAttribute = 4,
		Keyword = 5,
	};
}

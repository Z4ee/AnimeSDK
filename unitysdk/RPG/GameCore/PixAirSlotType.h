#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirSlotType_TypeDefinitionIndex = 10045;

	enum class PixAirSlotType : ::System::Int32
	{
		None = 0,
		Small = 1,
		Large = 2,
	};
}

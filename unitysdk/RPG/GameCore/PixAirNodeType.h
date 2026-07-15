#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirNodeType_TypeDefinitionIndex = 11652;

	enum class PixAirNodeType : ::System::Int32
	{
		None = 0,
		Select = 1,
		Battle = 2,
		FinalBattle = 3,
	};
}

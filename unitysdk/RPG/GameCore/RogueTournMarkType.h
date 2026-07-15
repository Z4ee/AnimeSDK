#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournMarkType_TypeDefinitionIndex = 10248;

	enum class RogueTournMarkType : ::System::Int32
	{
		None = 0,
		Enhance = 1,
		Double = 2,
		Choice = 3,
	};
}

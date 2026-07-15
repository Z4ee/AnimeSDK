#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleFloatToInt_TypeDefinitionIndex = 16165;

	enum class MarbleFloatToInt : ::System::Int32
	{
		Floor = 0,
		Ceil = 1,
		Round = 2,
	};
}

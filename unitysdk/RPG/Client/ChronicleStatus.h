#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChronicleStatus_TypeDefinitionIndex = 63143;

	enum class ChronicleStatus : ::System::Int32
	{
		UnKnown = 0,
		Locked = 1,
		Processing = 2,
		Prediction = 3,
		Finished = 4,
	};
}

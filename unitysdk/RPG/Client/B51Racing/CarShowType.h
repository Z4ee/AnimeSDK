#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int CarShowType_TypeDefinitionIndex = 81699;

	enum class CarShowType : ::System::Int32
	{
		InWorld = 0,
		Display = 1,
		InWorkLine = 2,
	};
}

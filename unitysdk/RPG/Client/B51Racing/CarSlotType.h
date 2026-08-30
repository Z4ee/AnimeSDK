#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int CarSlotType_TypeDefinitionIndex = 80437;

	enum class CarSlotType : ::System::Int32
	{
		Head = 0,
		Side = 1,
		RearWing = 2,
		Number = 3,
	};
}

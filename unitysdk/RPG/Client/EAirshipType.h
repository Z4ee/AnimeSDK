#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EAirshipType_TypeDefinitionIndex = 57120;

	enum class EAirshipType : ::System::Int32
	{
		Unknown = 0,
		Passenger = 1,
		Cargo = 2,
		Cargo2 = 3,
		CargoBoardLarge = 4,
		CargoBoard = 5,
		Subway = 6,
	};
}

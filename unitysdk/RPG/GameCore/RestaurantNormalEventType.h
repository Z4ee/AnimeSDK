#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantNormalEventType_TypeDefinitionIndex = 10035;

	enum class RestaurantNormalEventType : ::System::Int32
	{
		Unknown = 0,
		CleanTable = 1,
		CleanObstacle = 2,
		ExtraPay = 3,
		Select = 4,
		EscapeBill = 5,
		Help = 6,
		Complaint = 7,
		Thank = 8,
		Sleep = 9,
		DrinkMachine = 10,
		Bonus = 11,
	};
}

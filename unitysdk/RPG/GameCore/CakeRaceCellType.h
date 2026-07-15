#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCellType_TypeDefinitionIndex = 17681;

	enum class CakeRaceCellType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		PushPlate = 2,
		BouncePlate = 3,
		Mod = 4,
		Ice = 5,
		Slide = 6,
		InToilet = 7,
		OutToilet = 8,
		Travelator = 9,
		Bubble = 10,
		Wubbaboo = 11,
	};
}

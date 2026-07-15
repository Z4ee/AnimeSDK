#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int SIMEmotionState_TypeDefinitionIndex = 41042;

	enum class SIMEmotionState : ::System::Int32
	{
		Unknown = 0,
		Angry = 1,
		BloodShot = 2,
		Pace = 3,
		Perfect = 4,
	};
}

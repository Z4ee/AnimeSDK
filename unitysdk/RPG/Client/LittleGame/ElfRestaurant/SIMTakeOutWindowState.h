#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int SIMTakeOutWindowState_TypeDefinitionIndex = 41041;

	enum class SIMTakeOutWindowState : ::System::Int32
	{
		Unknown = 0,
		Free = 1,
		Wait = 2,
		Delivery = 3,
	};
}

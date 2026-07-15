#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int DoorState_TypeDefinitionIndex = 40875;

	enum class DoorState : ::System::Int32
	{
		Close = 0,
		Opening = 1,
		Open = 2,
	};
}

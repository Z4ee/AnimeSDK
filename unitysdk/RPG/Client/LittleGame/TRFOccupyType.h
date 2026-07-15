#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TRFOccupyType_TypeDefinitionIndex = 40264;

	enum class TRFOccupyType : ::System::Int32
	{
		None = 0,
		Center = 1,
		Up = 2,
		Down = 4,
		Left = 8,
		Right = 16,
		Ladder = 32,
		Trigger = 64,
		Terminus = 128,
		TeleportGate = 256,
		Switch = 512,
		Stand = 739,
	};
}

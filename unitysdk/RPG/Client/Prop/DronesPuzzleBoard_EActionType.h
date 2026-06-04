#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DronesPuzzleBoard_EActionType_TypeDefinitionIndex = 73084;

	enum class DronesPuzzleBoard_EActionType : ::System::Int32
	{
		W = 0,
		A = 1,
		S = 2,
		D = 3,
		Up = 4,
		Down = 5,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int InputSignalType_TypeDefinitionIndex = 41572;

	enum class InputSignalType : ::System::Int32
	{
		RotateWorldClockwise = 0,
		RotateWorldCounterClockwise = 1,
	};
}

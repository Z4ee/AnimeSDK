#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_Config_SpeedMode_TypeDefinitionIndex = 54012;

	enum class CurveMoveComponent_Config_SpeedMode : ::System::Int32
	{
		Teleport = 3,
		Curve = 2,
		ResetPos = 4,
		FixedSpeed = 0,
		Acceleration = 1,
	};
}

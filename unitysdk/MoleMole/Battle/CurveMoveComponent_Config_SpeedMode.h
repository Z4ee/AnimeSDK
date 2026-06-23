#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_Config_SpeedMode_TypeDefinitionIndex = 53504;

	enum class CurveMoveComponent_Config_SpeedMode : ::System::Int32
	{
		Curve = 2,
		ResetPos = 4,
		Acceleration = 1,
		Teleport = 3,
		FixedSpeed = 0,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_Config_MoveMode_TypeDefinitionIndex = 54010;

	enum class CurveMoveComponent_Config_MoveMode : ::System::Int32
	{
		Aboslute = 1,
		Relative = 0,
	};
}

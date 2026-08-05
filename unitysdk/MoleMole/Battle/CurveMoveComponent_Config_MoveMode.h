#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_Config_MoveMode_TypeDefinitionIndex = 65749;

	enum class CurveMoveComponent_Config_MoveMode : ::System::Int32
	{
		Relative = 0,
		Aboslute = 1,
	};
}

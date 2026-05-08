#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_Config_MoveType_TypeDefinitionIndex = 54014;

	enum class CurveMoveComponent_Config_MoveType : ::System::Int32
	{
		SetPosition = 3,
		KinematicVelocity = 1,
		Velocity = 0,
		MovePosition = 2,
	};
}

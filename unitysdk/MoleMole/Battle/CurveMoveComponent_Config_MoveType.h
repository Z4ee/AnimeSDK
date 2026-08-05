#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_Config_MoveType_TypeDefinitionIndex = 65747;

	enum class CurveMoveComponent_Config_MoveType : ::System::Int32
	{
		MovePosition = 2,
		KinematicVelocity = 1,
		MovePositionAndInstSetRotation = 4,
		SetPosition = 3,
		Velocity = 0,
	};
}

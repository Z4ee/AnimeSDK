#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_Config_MoveType_TypeDefinitionIndex = 53503;

	enum class CurveMoveComponent_Config_MoveType : ::System::Int32
	{
		SetPosition = 3,
		KinematicVelocity = 1,
		Velocity = 0,
		MovePosition = 2,
		MovePositionAndInstSetRotation = 4,
	};
}

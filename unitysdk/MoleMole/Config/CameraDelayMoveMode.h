#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraDelayMoveMode_TypeDefinitionIndex = 83153;

	enum class CameraDelayMoveMode : ::System::Int32
	{
		HexOrbitDefault = 12,
		None = -1,
		AimMode = 5,
		HighSpeedAttackDirect = 1,
		OrbitDefault = 0,
		DragDirect = 3,
		LowSpeedAttack = 25,
		SwitchAvatar = 20,
		AnyCamera = 99,
		HexMovementRotate = 11,
		MovementRotate = 2,
		LockOnDirect = 4,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraDelayMoveMode_TypeDefinitionIndex = 53922;

	enum class CameraDelayMoveMode : ::System::Int32
	{
		None = -1,
		LockOnDirect = 4,
		AimMode = 5,
		HexMovementRotate = 11,
		OrbitDefault = 0,
		MovementRotate = 2,
		AnyCamera = 99,
		LowSpeedAttack = 25,
		DragDirect = 3,
		HighSpeedAttackDirect = 1,
		HexOrbitDefault = 12,
		SwitchAvatar = 20,
	};
}

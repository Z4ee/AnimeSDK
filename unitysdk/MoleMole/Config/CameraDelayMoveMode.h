#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraDelayMoveMode_TypeDefinitionIndex = 49631;

	enum class CameraDelayMoveMode : ::System::Int32
	{
		AimMode = 5,
		OrbitDefault = 0,
		HexMovementRotate = 11,
		LowSpeedAttack = 25,
		HexOrbitDefault = 12,
		LockOnDirect = 4,
		MovementRotate = 2,
		HighSpeedAttackDirect = 1,
		None = -1,
		AnyCamera = 99,
		SwitchAvatar = 20,
		DragDirect = 3,
	};
}

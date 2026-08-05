#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraMoveModeData_MoveModeDataPriority_TypeDefinitionIndex = 53624;

	enum class CameraMoveModeData_MoveModeDataPriority : ::System::Byte
	{
		NormalData = 0xA,
		MidPriorityData = 0x63,
		AimMode = 0xC8,
		DragOrbital = 0x64,
		MovePlatformOrbital = 0x50,
		Default = 0x1,
		SwitchAvatarOrbital = 0x62,
		LockTargetOrbital = 0x61,
		HighPriorityData = 0xE1,
	};
}

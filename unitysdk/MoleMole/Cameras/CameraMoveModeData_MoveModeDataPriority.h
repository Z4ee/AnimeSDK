#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraMoveModeData_MoveModeDataPriority_TypeDefinitionIndex = 50358;

	enum class CameraMoveModeData_MoveModeDataPriority : ::System::Byte
	{
		SwitchAvatarOrbital = 0x62,
		LockTargetOrbital = 0x61,
		AimMode = 0xC8,
		NormalData = 0xA,
		Default = 0x1,
		MidPriorityData = 0x63,
		HighPriorityData = 0xE1,
		DragOrbital = 0x64,
	};
}

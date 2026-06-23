#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraMoveModeData_MoveModeDataPriority_TypeDefinitionIndex = 76684;

	enum class CameraMoveModeData_MoveModeDataPriority : ::System::Byte
	{
		SwitchAvatarOrbital = 0x62,
		LockTargetOrbital = 0x61,
		MidPriorityData = 0x63,
		Default = 0x1,
		DragOrbital = 0x64,
		MovePlatformOrbital = 0x50,
		NormalData = 0xA,
		HighPriorityData = 0xE1,
		AimMode = 0xC8,
	};
}

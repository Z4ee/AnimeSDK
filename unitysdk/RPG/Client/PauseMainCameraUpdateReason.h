#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PauseMainCameraUpdateReason_TypeDefinitionIndex = 66585;

	enum class PauseMainCameraUpdateReason : ::System::Int32
	{
		PauseCameraTask = 1,
		GM = 2,
		LockModule = 4,
		CameraManagerActive = 8,
		Effect = 16,
		SwitchAnchor = 32,
	};
}

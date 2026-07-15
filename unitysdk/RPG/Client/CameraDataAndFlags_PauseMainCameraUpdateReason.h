#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_PauseMainCameraUpdateReason_TypeDefinitionIndex = 66430;

	enum class CameraDataAndFlags_PauseMainCameraUpdateReason : ::System::Int32
	{
		PauseCameraTask = 1,
		GM = 2,
		LockModule = 4,
		CameraManagerActive = 8,
		Effect = 16,
	};
}

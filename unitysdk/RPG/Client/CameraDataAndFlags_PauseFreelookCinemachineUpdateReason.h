#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_PauseFreelookCinemachineUpdateReason_TypeDefinitionIndex = 66429;

	enum class CameraDataAndFlags_PauseFreelookCinemachineUpdateReason : ::System::Int32
	{
		PauseCameraTask = 1,
		GM = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_DisableFreelook3rdCameraInputAxisReason_TypeDefinitionIndex = 66421;

	enum class CameraDataAndFlags_DisableFreelook3rdCameraInputAxisReason : ::System::Int32
	{
		Default = 0,
		LockModule = 1,
		TravelShip = 2,
	};
}

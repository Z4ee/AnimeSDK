#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_ControlCameraProtectReason_TypeDefinitionIndex = 66424;

	enum class CameraDataAndFlags_ControlCameraProtectReason : ::System::Int32
	{
		DisableCameraProtectImpl = 0,
		ThirdPersonRoaming = 1,
	};
}

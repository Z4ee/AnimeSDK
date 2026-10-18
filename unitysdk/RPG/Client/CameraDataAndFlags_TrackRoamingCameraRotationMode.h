#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_TrackRoamingCameraRotationMode_TypeDefinitionIndex = 69549;

	enum class CameraDataAndFlags_TrackRoamingCameraRotationMode : ::System::Int32
	{
		AutoRotate = 0,
		ManualRotate = 1,
	};
}

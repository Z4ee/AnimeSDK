#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_TrackRoamingCameraRotationMode_TypeDefinitionIndex = 66420;

	enum class CameraDataAndFlags_TrackRoamingCameraRotationMode : ::System::Int32
	{
		AutoRotate = 0,
		ManualRotate = 1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_TrackCameraTrackType_TypeDefinitionIndex = 65023;

	enum class CameraDataAndFlags_TrackCameraTrackType : ::System::Int32
	{
		PathWay = 0,
		Curve = 1,
	};
}

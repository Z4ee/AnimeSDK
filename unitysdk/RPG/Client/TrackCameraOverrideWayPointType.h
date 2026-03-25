#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TrackCameraOverrideWayPointType_TypeDefinitionIndex = 56948;

	enum class TrackCameraOverrideWayPointType : ::System::Int32
	{
		Start = 0,
		End = 1,
	};
}

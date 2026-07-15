#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveTrackCameraMode_TypeDefinitionIndex = 23673;

	enum class ActiveTrackCameraMode : ::System::Int32
	{
		PlayerMove = 0,
		Auto = 1,
	};
}

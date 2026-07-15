#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AudioListenerMode_TypeDefinitionIndex = 57088;

	enum class AudioListenerMode : ::System::Int32
	{
		None = 0,
		Following = 1,
		Camera = 2,
		CameraWithinDist = 3,
		FollowingWithDirect = 4,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AudioBGMEmotionSourceType_TypeDefinitionIndex = 57771;

	enum class AudioBGMEmotionSourceType : ::System::Int32
	{
		None = 0,
		SpecialGameplay = 1,
		Mission = 2,
		WalkOnWall = 3,
		District = 4,
		Floor = 5,
	};
}

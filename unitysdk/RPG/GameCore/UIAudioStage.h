#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIAudioStage_TypeDefinitionIndex = 15729;

	enum class UIAudioStage : ::System::Int32
	{
		None = 0,
		GamePause = 1,
		OpenNormalUI = 2,
		ScreenTrans = 3,
		PerformancePause = 4,
		Loading = 5,
	};
}

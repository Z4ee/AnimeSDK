#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimelineType_TypeDefinitionIndex = 23659;

	enum class TimelineType : ::System::Int32
	{
		Common = 0,
		Emotion = 1,
		Story = 2,
		Cutscene = 3,
		Discussion = 4,
		BattleEffect = 5,
	};
}

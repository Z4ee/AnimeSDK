#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirStageType_TypeDefinitionIndex = 11656;

	enum class PixAirStageType : ::System::Int32
	{
		None = 0,
		Tutorial = 1,
		Normal = 2,
		Challenge = 3,
		TutorialDemo = 4,
	};
}

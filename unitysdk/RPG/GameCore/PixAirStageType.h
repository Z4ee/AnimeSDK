#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirStageType_TypeDefinitionIndex = 12045;

	enum class PixAirStageType : ::System::Int32
	{
		None = 0,
		Tutorial = 1,
		Normal = 2,
		Challenge = 3,
		TutorialDemo = 4,
	};
}

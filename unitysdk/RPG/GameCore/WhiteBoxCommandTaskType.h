#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WhiteBoxCommandTaskType_TypeDefinitionIndex = 10174;

	enum class WhiteBoxCommandTaskType : ::System::Int32
	{
		Unknow = 0,
		PlayTimeline = 1,
	};
}

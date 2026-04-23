#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NextMainMissionStatus_TypeDefinitionIndex = 13393;

	enum class NextMainMissionStatus : ::System::Int32
	{
		None = 0,
		NotStart = 1,
		IsStart = 2,
	};
}

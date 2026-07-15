#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionProgressType_TypeDefinitionIndex = 18270;

	enum class MissionProgressType : ::System::Int32
	{
		ShowRate = 0,
		ShowProgress = 1,
	};
}

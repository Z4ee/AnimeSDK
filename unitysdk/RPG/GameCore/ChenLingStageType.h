#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingStageType_TypeDefinitionIndex = 11058;

	enum class ChenLingStageType : ::System::Int32
	{
		Teaching = 0,
		Normal = 1,
		Endless = 2,
	};
}

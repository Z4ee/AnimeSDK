#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingStageWaveType_TypeDefinitionIndex = 10688;

	enum class ChenLingStageWaveType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Elite = 2,
		Boss = 3,
		Shop = 4,
	};
}

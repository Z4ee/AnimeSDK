#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaveMonsterTiming_TypeDefinitionIndex = 10069;

	enum class WaveMonsterTiming : ::System::Int32
	{
		Normal = 0,
		DelayCreate = 1,
	};
}

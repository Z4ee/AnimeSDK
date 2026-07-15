#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BPRewardStatus_TypeDefinitionIndex = 60116;

	enum class BPRewardStatus : ::System::Int32
	{
		None = 0,
		Locked = 1,
		Available = 2,
		Taken = 3,
	};
}

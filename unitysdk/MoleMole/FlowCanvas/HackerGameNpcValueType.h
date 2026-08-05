#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcValueType_TypeDefinitionIndex = 85559;

	enum class HackerGameNpcValueType : ::System::Int32
	{
		FeverReward = 4,
		Health = 1,
		Damage = 3,
		None = 0,
		Reward = 2,
	};
}

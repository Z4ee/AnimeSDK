#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcValueType_TypeDefinitionIndex = 76444;

	enum class HackerGameNpcValueType : ::System::Int32
	{
		Damage = 3,
		Reward = 2,
		Health = 1,
		None = 0,
		FeverReward = 4,
	};
}

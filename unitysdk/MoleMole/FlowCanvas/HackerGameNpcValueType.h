#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcValueType_TypeDefinitionIndex = 73017;

	enum class HackerGameNpcValueType : ::System::Int32
	{
		Damage = 3,
		None = 0,
		FeverReward = 4,
		Reward = 2,
		Health = 1,
	};
}

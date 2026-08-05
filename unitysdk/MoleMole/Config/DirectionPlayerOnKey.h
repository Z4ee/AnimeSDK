#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DirectionPlayerOnKey_TypeDefinitionIndex = 88003;

	enum class DirectionPlayerOnKey : ::System::Int32
	{
		ConveyerBeltPushArrive = 8,
		StringPushStart = 6,
		Move = 1,
		PushBackArrive = 3,
		BeforePushBack = 2,
		PushDistanceArrive = 10,
		StringPushArrive = 7,
		OneStepBlocked = 4,
		PushDistanceStart = 9,
		None = 0,
		ContinousMoveBlocked = 5,
	};
}

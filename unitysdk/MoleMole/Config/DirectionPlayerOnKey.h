#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DirectionPlayerOnKey_TypeDefinitionIndex = 82363;

	enum class DirectionPlayerOnKey : ::System::Int32
	{
		PushDistanceArrive = 10,
		StringPushStart = 6,
		ContinousMoveBlocked = 5,
		Move = 1,
		None = 0,
		PushDistanceStart = 9,
		StringPushArrive = 7,
		ConveyerBeltPushArrive = 8,
		BeforePushBack = 2,
		PushBackArrive = 3,
		OneStepBlocked = 4,
	};
}

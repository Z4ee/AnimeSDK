#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DirectionPlayerOnKey_TypeDefinitionIndex = 55352;

	enum class DirectionPlayerOnKey : ::System::Int32
	{
		StringPushArrive = 7,
		OneStepBlocked = 4,
		PushBackArrive = 3,
		PushDistanceArrive = 10,
		None = 0,
		StringPushStart = 6,
		ContinousMoveBlocked = 5,
		ConveyerBeltPushArrive = 8,
		Move = 1,
		BeforePushBack = 2,
		PushDistanceStart = 9,
	};
}

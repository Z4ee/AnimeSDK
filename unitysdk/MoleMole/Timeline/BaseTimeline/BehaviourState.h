#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Timeline::BaseTimeline
{
	inline static constexpr unsigned int BehaviourState_TypeDefinitionIndex = 30685;

	enum class BehaviourState : ::System::Int32
	{
		Undefined = 0,
		OnPlay = 1,
		OnPause = 2,
	};
}

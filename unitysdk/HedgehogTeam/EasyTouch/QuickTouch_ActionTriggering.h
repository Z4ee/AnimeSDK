#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickTouch_ActionTriggering_TypeDefinitionIndex = 38123;

	enum class QuickTouch_ActionTriggering : ::System::Int32
	{
		Start = 0,
		Down = 1,
		Up = 2,
	};
}

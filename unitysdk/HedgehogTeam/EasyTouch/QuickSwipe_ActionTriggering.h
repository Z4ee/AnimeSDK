#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickSwipe_ActionTriggering_TypeDefinitionIndex = 38115;

	enum class QuickSwipe_ActionTriggering : ::System::Int32
	{
		InProgress = 0,
		End = 1,
	};
}

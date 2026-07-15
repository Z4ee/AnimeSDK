#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickLongTap_ActionTriggering_TypeDefinitionIndex = 38108;

	enum class QuickLongTap_ActionTriggering : ::System::Int32
	{
		Start = 0,
		InProgress = 1,
		End = 2,
	};
}

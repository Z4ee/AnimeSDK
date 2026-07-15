#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickTap_ActionTriggering_TypeDefinitionIndex = 38119;

	enum class QuickTap_ActionTriggering : ::System::Int32
	{
		Simple_Tap = 0,
		Double_Tap = 1,
	};
}

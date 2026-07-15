#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PinballPageProxy_PinballPageHintState_TypeDefinitionIndex = 74810;

	enum class PinballPageProxy_PinballPageHintState : ::System::Int32
	{
		DEACTIVE = 0,
		STATION_ERROR_DIRECTION = 1,
		BLOCKED = 2,
		LAUNCH = 3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int EAirshipSubwayState_TypeDefinitionIndex = 64524;

	enum class EAirshipSubwayState : ::System::Int32
	{
		None = 0,
		Enter = 1,
		Waiting = 2,
		Exit = 3,
		Finish = 4,
	};
}

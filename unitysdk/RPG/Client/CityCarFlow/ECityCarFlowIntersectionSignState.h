#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int ECityCarFlowIntersectionSignState_TypeDefinitionIndex = 72598;

	enum class ECityCarFlowIntersectionSignState : ::System::Int32
	{
		Closed = 0,
		Open = 1,
	};
}

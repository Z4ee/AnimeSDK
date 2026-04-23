#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CableLightState_TypeDefinitionIndex = 72103;

	enum class CableLightState : ::System::Int32
	{
		UnConnect = 0,
		ActiveIn = 1,
		ActiveOut = 2,
	};
}

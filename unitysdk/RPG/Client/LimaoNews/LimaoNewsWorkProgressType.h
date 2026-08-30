#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkProgressType_TypeDefinitionIndex = 79122;

	enum class LimaoNewsWorkProgressType : ::System::Int32
	{
		Start = 0,
		Ongoing = 1,
		Result = 2,
	};
}

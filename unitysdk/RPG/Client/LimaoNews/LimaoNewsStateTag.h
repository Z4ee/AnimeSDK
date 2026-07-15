#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsStateTag_TypeDefinitionIndex = 75426;

	enum class LimaoNewsStateTag : ::System::Int32
	{
		None = 0,
		UnSearch = 1,
		InProgress = 2,
		Finish = 3,
		CanSubmit = 4,
	};
}

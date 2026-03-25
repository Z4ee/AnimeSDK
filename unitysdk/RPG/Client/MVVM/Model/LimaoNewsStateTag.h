#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int LimaoNewsStateTag_TypeDefinitionIndex = 61070;

	enum class LimaoNewsStateTag : ::System::Int32
	{
		None = 0,
		UnSearch = 1,
		InProgress = 2,
		Finish = 3,
		CanSubmit = 4,
	};
}

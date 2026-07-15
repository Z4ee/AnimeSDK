#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int PromiseState_TypeDefinitionIndex = 9538;

	enum class PromiseState : ::System::Int32
	{
		Pending = 0,
		Rejected = 1,
		Resolved = 2,
	};
}

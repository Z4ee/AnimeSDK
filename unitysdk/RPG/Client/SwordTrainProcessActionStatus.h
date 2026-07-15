#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainProcessActionStatus_TypeDefinitionIndex = 59218;

	enum class SwordTrainProcessActionStatus : ::System::Int32
	{
		UnKnown = 0,
		Waiting = 1,
		Doing = 2,
		Done = 3,
	};
}

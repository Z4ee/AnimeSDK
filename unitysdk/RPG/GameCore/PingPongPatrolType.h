#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongPatrolType_TypeDefinitionIndex = 17977;

	enum class PingPongPatrolType : ::System::Int32
	{
		Loop = 0,
		Reverse = 1,
	};
}

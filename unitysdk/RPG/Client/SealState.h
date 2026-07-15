#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SealState_TypeDefinitionIndex = 57709;

	enum class SealState : ::System::Int32
	{
		Idle = 0,
		Rotate = 1,
		Move = 2,
	};
}

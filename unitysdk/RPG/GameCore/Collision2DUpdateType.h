#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int Collision2DUpdateType_TypeDefinitionIndex = 51203;

	enum class Collision2DUpdateType : ::System::Int32
	{
		Manual = 0,
		Tick = 1,
		RtTick = 2,
	};
}

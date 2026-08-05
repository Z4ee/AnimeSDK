#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPlayerState_TypeDefinitionIndex = 17388;

	enum class EPlayerState : ::System::Int16
	{
		Alive = 0,
		EnumCount = 2,
		Death = 1,
	};
}

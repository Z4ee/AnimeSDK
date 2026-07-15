#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ComposeItemFailedType_TypeDefinitionIndex = 62832;

	enum class ComposeItemFailedType : ::System::Int32
	{
		OK = 0,
		LockedByLevel = 10,
		NeedCoin = 1,
		NeedResource = 2,
		InsufficientRemainComposeNum = 3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPlayerType_TypeDefinitionIndex = 17351;

	enum class EPlayerType : ::System::Int16
	{
		All = 0,
		TeamCharacter1 = 1,
		TeamCharacter3 = 3,
		EnumCount = 4,
		TeamCharacter2 = 2,
	};
}

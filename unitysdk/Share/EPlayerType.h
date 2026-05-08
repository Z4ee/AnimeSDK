#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPlayerType_TypeDefinitionIndex = 16973;

	enum class EPlayerType : ::System::Int16
	{
		TeamCharacter1 = 1,
		All = 0,
		TeamCharacter3 = 3,
		EnumCount = 4,
		TeamCharacter2 = 2,
	};
}

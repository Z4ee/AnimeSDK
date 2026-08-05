#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPlayerType_TypeDefinitionIndex = 16141;

	enum class EPlayerType : ::System::Int16
	{
		EnumCount = 4,
		TeamCharacter2 = 2,
		TeamCharacter1 = 1,
		TeamCharacter3 = 3,
		All = 0,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAvatarPos_TypeDefinitionIndex = 18080;

	enum class EAvatarPos : ::System::Int16
	{
		TeamCharacter2 = 3,
		All = 0,
		TeamCharacter1 = 2,
		TeamCharacter3 = 4,
		EnumCount = 5,
		Random = 1,
	};
}

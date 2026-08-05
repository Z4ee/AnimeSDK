#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAvatarPos_TypeDefinitionIndex = 16769;

	enum class EAvatarPos : ::System::Int16
	{
		TeamCharacter2 = 3,
		Random = 1,
		All = 0,
		TeamCharacter3 = 4,
		TeamCharacter1 = 2,
		EnumCount = 5,
	};
}

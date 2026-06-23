#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAvatarPos_TypeDefinitionIndex = 13106;

	enum class EAvatarPos : ::System::Int16
	{
		TeamCharacter1 = 2,
		EnumCount = 5,
		TeamCharacter2 = 3,
		Random = 1,
		TeamCharacter3 = 4,
		All = 0,
	};
}

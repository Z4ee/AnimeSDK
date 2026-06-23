#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECharacterType_TypeDefinitionIndex = 10290;

	enum class ECharacterType : ::System::Int16
	{
		Main = 3,
		Exchange = 2,
		Female = 1,
		Male = 0,
		Vice = 4,
		EnumCount = 5,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECharacterType_TypeDefinitionIndex = 10448;

	enum class ECharacterType : ::System::Int16
	{
		EnumCount = 5,
		Vice = 4,
		Female = 1,
		Male = 0,
		Exchange = 2,
		Main = 3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateHouguType_TypeDefinitionIndex = 10037;

	enum class FateHouguType : ::System::Int32
	{
		Fake = 1,
		Common = 2,
		Ultra = 3,
	};
}

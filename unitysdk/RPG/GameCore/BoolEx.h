#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoolEx_TypeDefinitionIndex = 23781;

	enum class BoolEx : ::System::Int32
	{
		False = 0,
		True = 1,
		Keep = 2,
		Invert = 3,
	};
}

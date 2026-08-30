#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYNumButtonType_TypeDefinitionIndex = 80666;

	enum class B51RacingDIYNumButtonType : ::System::Int32
	{
		Digit = 0,
		Clear = 1,
		Delete = 2,
	};
}

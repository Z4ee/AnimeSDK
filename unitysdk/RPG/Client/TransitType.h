#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TransitType_TypeDefinitionIndex = 33897;

	enum class TransitType : ::System::Int32
	{
		Decend = 1,
		Ascend = 2,
		Hold = 3,
	};
}

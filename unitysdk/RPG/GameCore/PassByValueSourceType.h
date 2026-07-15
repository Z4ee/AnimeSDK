#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PassByValueSourceType_TypeDefinitionIndex = 23646;

	enum class PassByValueSourceType : ::System::Int32
	{
		FCV = 0,
		FSV = 1,
		GroupProperty = 2,
		DynamicValue = 3,
	};
}

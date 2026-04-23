#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PassByValueTargetType_TypeDefinitionIndex = 19488;

	enum class PassByValueTargetType : ::System::Int32
	{
		FCV = 0,
		GroupProperty = 2,
		DynamicValue = 3,
	};
}

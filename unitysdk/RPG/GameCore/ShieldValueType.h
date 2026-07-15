#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShieldValueType_TypeDefinitionIndex = 23821;

	enum class ShieldValueType : ::System::Int32
	{
		Self = 0,
		Team = 1,
		Total = 2,
	};
}

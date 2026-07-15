#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtModifierPropertyOverrideType_TypeDefinitionIndex = 23938;

	enum class RtModifierPropertyOverrideType : ::System::Int32
	{
		AddValue = 0,
		AddRatio = 1,
		SetValue = 2,
	};
}

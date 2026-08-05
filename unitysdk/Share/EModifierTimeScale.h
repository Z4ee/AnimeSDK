#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EModifierTimeScale_TypeDefinitionIndex = 11289;

	enum class EModifierTimeScale : ::System::Int16
	{
		Owner = 0,
		Caster = 1,
		Level = 2,
	};
}

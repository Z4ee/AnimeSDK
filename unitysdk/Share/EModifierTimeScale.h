#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EModifierTimeScale_TypeDefinitionIndex = 13253;

	enum class EModifierTimeScale : ::System::Int16
	{
		Caster = 1,
		Owner = 0,
		Level = 2,
	};
}

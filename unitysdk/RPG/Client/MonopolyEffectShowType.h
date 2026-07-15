#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyEffectShowType_TypeDefinitionIndex = 63275;

	enum class MonopolyEffectShowType : ::System::Int32
	{
		Silent = 0,
		Toast = 1,
		Effect = 2,
		EffectOnCurCell = 3,
	};
}

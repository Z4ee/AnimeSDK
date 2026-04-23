#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BuffType_TypeDefinitionIndex = 11896;

	enum class BuffType : ::System::Int32
	{
		Neutral = 0,
		Buff = 1,
		DeBuff = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinHouguRarityType_TypeDefinitionIndex = 10192;

	enum class FateRinHouguRarityType : ::System::Int32
	{
		Undefine = 0,
		R = 1,
		SR = 2,
		SSR = 3,
	};
}

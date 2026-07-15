#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCardCasterSource_TypeDefinitionIndex = 17423;

	enum class FateRinCardCasterSource : ::System::Int32
	{
		TeamAgent = 0,
		Master = 1,
		Servant = 2,
	};
}

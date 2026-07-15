#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceBuffStackType_TypeDefinitionIndex = 17635;

	enum class CakeRaceBuffStackType : ::System::Int32
	{
		None = 0,
		DelayTime = 1,
		Replace = 2,
	};
}

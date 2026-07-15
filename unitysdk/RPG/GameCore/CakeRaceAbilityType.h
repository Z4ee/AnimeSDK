#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceAbilityType_TypeDefinitionIndex = 17590;

	enum class CakeRaceAbilityType : ::System::Int32
	{
		Normal = 0,
		UseItem = 2,
		QingqueSKill01 = 3,
		CatCommonActive = 4,
	};
}

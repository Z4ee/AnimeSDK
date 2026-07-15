#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterExposedType_TypeDefinitionIndex = 16436;

	enum class MonsterExposedType : ::System::Int32
	{
		AlertYellow = 0,
		AlertRed = 1,
		InAttack = 2,
	};
}

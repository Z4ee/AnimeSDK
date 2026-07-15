#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterStanceBarStyle_TypeDefinitionIndex = 23806;

	enum class MonsterStanceBarStyle : ::System::Int32
	{
		Invalid = 0,
		Default = 1,
		WhiteBox = 2,
		RedStance = 3,
	};
}

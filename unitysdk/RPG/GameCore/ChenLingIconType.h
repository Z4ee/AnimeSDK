#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingIconType_TypeDefinitionIndex = 10680;

	enum class ChenLingIconType : ::System::Int32
	{
		Invalid = 0,
		Buff = 1,
		Soldier = 2,
		Building = 3,
	};
}

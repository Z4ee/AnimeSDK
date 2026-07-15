#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BossHPStanceChangeType_TypeDefinitionIndex = 23898;

	enum class BossHPStanceChangeType : ::System::Int32
	{
		Default = 0,
		Heal = 1,
	};
}

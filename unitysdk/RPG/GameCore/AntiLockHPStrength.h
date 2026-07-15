#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AntiLockHPStrength_TypeDefinitionIndex = 23894;

	enum class AntiLockHPStrength : ::System::Int32
	{
		Normal = 0,
		Split = 10,
		Shared = 11,
		AntiWeak = 12,
		Mandatory = 100,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageBlockType_TypeDefinitionIndex = 24562;

	enum class DamageBlockType : ::System::Int32
	{
		None = 0,
		DamageBlock = 1,
		DamageBlockExcludeDot = 2,
	};
}

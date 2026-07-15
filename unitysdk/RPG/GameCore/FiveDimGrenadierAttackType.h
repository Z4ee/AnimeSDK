#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGrenadierAttackType_TypeDefinitionIndex = 10183;

	enum class FiveDimGrenadierAttackType : ::System::Int32
	{
		None = 0,
		Sequence = 1,
		Random = 2,
	};
}

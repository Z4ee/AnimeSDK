#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TargetTypeInferResult_TypeDefinitionIndex = 59810;

	enum class TargetTypeInferResult : ::System::Int32
	{
		None = 0,
		Self = 1,
		Owner = 2,
		Summon = 4,
		Enemy = 4,
		Unknown = 8,
	};
}

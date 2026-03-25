#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIActionType_TypeDefinitionIndex = 42282;

	enum class AIActionType : ::System::Int32
	{
		None = 0,
		MoveTo = 1,
		Follow = 2,
		LeadWay = 3,
		PlaySO = 4,
	};
}

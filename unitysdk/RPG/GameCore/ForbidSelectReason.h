#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForbidSelectReason_TypeDefinitionIndex = 52524;

	enum class ForbidSelectReason : ::System::Int32
	{
		Default = 1,
		Confine = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PamState_TypeDefinitionIndex = 61184;

	enum class PamState : ::System::Int32
	{
		None = 0,
		Move = 1,
		Action = 2,
		Done = 3,
	};
}

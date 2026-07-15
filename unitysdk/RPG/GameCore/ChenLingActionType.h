#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingActionType_TypeDefinitionIndex = 10699;

	enum class ChenLingActionType : ::System::Int32
	{
		None = 0,
		SelectCard = 1,
		AddCard = 2,
	};
}

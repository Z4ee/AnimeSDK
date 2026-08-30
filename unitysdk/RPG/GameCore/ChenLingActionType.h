#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingActionType_TypeDefinitionIndex = 11074;

	enum class ChenLingActionType : ::System::Int32
	{
		None = 0,
		SelectCard = 1,
		AddCard = 2,
	};
}

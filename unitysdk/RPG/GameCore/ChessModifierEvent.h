#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessModifierEvent_TypeDefinitionIndex = 16192;

	enum class ChessModifierEvent : ::System::Int32
	{
		None = 0,
		OnCreate = 1,
		OnDestroy = 2,
		OnStack = 3,
		OnModifierAdd = 4,
		OnModifierRemove = 5,
		OnModifierOnStack = 6,
		Count = 7,
	};
}

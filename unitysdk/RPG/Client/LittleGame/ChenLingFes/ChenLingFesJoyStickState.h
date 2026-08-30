#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesJoyStickState_TypeDefinitionIndex = 77297;

	enum class ChenLingFesJoyStickState : ::System::Int32
	{
		None = 0,
		UINavigation = 1,
		ItemOperation = 2,
		CursorSelection = 3,
	};
}

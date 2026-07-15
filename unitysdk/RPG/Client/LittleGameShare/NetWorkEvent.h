#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int NetWorkEvent_TypeDefinitionIndex = 35395;

	enum class NetWorkEvent : ::System::Int32
	{
		None = 0,
		GameInit = 1,
		GameStart = 2,
		PlayerEnter = 3,
		PlayerLeave = 4,
		GM = 5,
		GameplayCustom = 6,
		TimeoutClean = 7,
		Max = 8,
	};
}

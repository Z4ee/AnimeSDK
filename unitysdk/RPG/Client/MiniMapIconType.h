#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapIconType_TypeDefinitionIndex = 57915;

	enum class MiniMapIconType : ::System::Int32
	{
		GameEntity = 0,
		Mission = 1,
		Prop = 2,
		DailyProp = 3,
		Anchor = 4,
	};
}

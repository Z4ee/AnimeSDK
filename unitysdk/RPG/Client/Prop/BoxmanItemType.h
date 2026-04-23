#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanItemType_TypeDefinitionIndex = 72343;

	enum class BoxmanItemType : ::System::Int32
	{
		Normal = 0,
		Obstacle = 1,
		Target = 2,
		ResetButton = 3,
		InteractTarget = 4,
		Edge = 5,
		NormalBindProp = 6,
	};
}

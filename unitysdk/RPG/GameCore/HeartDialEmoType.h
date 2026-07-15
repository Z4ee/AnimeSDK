#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialEmoType_TypeDefinitionIndex = 10166;

	enum class HeartDialEmoType : ::System::Int32
	{
		Peace = 0,
		Anger = 1,
		Happy = 2,
		Sad = 3,
		Count = 4,
	};
}

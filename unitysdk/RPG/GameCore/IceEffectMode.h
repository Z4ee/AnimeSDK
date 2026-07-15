#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IceEffectMode_TypeDefinitionIndex = 15484;

	enum class IceEffectMode : ::System::Int32
	{
		ContentID = 0,
		MaxPoint = 1,
		MinPoint = 2,
	};
}

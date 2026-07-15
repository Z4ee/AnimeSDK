#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimZoneTransition_TypeDefinitionIndex = 15645;

	enum class AnimZoneTransition : ::System::Int32
	{
		Both = 0,
		Current = 1,
		Next = 2,
	};
}

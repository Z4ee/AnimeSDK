#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UITransitionAnimType_TypeDefinitionIndex = 69778;

	enum class UITransitionAnimType : ::System::Int32
	{
		Default = 0,
		Morph = 1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace ScenenLightManager
{
	inline static constexpr unsigned int FadingState_TypeDefinitionIndex = 47258;

	enum class FadingState : ::System::Int32
	{
		FadingOut = -1,
		FadingIn = 1,
		NoFading = 0,
	};
}

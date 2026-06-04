#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ComicDialogEmitterBehavior_FadeMode_TypeDefinitionIndex = 66271;

	enum class ComicDialogEmitterBehavior_FadeMode : ::System::Int32
	{
		Opacity = 1,
		Scale = 2,
	};
}

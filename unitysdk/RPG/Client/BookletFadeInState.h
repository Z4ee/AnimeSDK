#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BookletFadeInState_TypeDefinitionIndex = 69168;

	enum class BookletFadeInState : ::System::Int32
	{
		None = 0,
		Hide = 1,
		FadeIn = 2,
		FullShow = 3,
	};
}

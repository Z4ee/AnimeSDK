#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LimaoNewsSwitchUI3DLimaoType_TypeDefinitionIndex = 10310;

	enum class LimaoNewsSwitchUI3DLimaoType : ::System::Int32
	{
		FadeInAndFadeOut = 0,
		Immediate = 1,
		OnlyFadeIn = 2,
		OnlyFadeOut = 3,
	};
}

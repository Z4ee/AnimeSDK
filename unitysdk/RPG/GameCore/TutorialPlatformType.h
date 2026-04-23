#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialPlatformType_TypeDefinitionIndex = 14588;

	enum class TutorialPlatformType : ::System::Int32
	{
		Default = 0,
		PS = 1,
		Mobile = 2,
	};
}

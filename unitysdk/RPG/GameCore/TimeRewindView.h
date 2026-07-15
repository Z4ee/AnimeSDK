#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindView_TypeDefinitionIndex = 16857;

	enum class TimeRewindView : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Special = 2,
		Disable = 3,
		Static = 4,
		Specular = 5,
		ErrorSpecular = 6,
	};
}

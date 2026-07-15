#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DitherSourcePriority_TypeDefinitionIndex = 65780;

	enum class DitherSourcePriority : ::System::Int32
	{
		Default = 0,
		Camera = 1,
		Logic = 2,
		Max = 3,
	};
}

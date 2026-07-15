#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmptyModelControlMask_TypeDefinitionIndex = 54634;

	enum class EmptyModelControlMask : ::System::Int32
	{
		None = 0,
		Main = 1,
		Default = 2,
		Task = 4,
		DynamicLoadModule = 8,
		All = 15,
	};
}

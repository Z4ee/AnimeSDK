#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeathSource_TypeDefinitionIndex = 23774;

	enum class DeathSource : ::System::Int32
	{
		Unknown = 0,
		KilledByOthers = 1,
		KilledBySelf = 2,
		Escape = 3,
	};
}

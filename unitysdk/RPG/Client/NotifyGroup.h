#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int NotifyGroup_TypeDefinitionIndex = 55410;

	enum class NotifyGroup : ::System::Int32
	{
		Normal = 0,
		UI = 1,
		Count = 2,
	};
}

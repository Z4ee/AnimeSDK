#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIPriority_TypeDefinitionIndex = 72958;

	enum class UIPriority : ::System::Int32
	{
		Default = 0,
		Topmost = 1,
	};
}

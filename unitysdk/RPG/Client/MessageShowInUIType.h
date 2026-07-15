#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MessageShowInUIType_TypeDefinitionIndex = 63137;

	enum class MessageShowInUIType : ::System::Int32
	{
		All = 0,
		Normal = 1,
		Hacked = 2,
	};
}

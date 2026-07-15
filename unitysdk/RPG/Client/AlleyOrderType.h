#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyOrderType_TypeDefinitionIndex = 59502;

	enum class AlleyOrderType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Special = 2,
	};
}

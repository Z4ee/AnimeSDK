#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NearType_TypeDefinitionIndex = 23895;

	enum class NearType : ::System::Int32
	{
		Before = 0,
		After = 1,
	};
}

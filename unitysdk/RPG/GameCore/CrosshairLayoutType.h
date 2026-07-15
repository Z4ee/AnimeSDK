#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CrosshairLayoutType_TypeDefinitionIndex = 23902;

	enum class CrosshairLayoutType : ::System::Int32
	{
		Unknown = 0,
		Default = 1,
		MainSub = 2,
	};
}

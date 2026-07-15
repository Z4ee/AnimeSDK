#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GunPlayModeType_TypeDefinitionIndex = 10177;

	enum class GunPlayModeType : ::System::Int32
	{
		Normal = 0,
		EndLess = 1,
	};
}

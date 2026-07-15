#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DanmuType_TypeDefinitionIndex = 14830;

	enum class DanmuType : ::System::Int32
	{
		Text = 1,
		Img = 2,
		Gift = 3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoardShowType_TypeDefinitionIndex = 10266;

	enum class BoardShowType : ::System::Int32
	{
		Perspective = 0,
		Orthographic = 1,
	};
}

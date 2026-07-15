#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdaptOperationType_TypeDefinitionIndex = 57414;

	enum class UIAdaptOperationType : ::System::Int32
	{
		Indent = 0,
		SafeAreaIndent = 1,
		OffsetLeft = 2,
		OffsetRight = 3,
		ScaleX = 4,
		ScaleY = 5,
		ScaleZ = 6,
	};
}

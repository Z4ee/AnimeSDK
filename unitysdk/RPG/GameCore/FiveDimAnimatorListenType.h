#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAnimatorListenType_TypeDefinitionIndex = 17914;

	enum class FiveDimAnimatorListenType : ::System::Int32
	{
		Enter = 0,
		Exit = 1,
		Ratio = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int STDetectMoneyType_TypeDefinitionIndex = 24200;

	enum class STDetectMoneyType : ::System::Int32
	{
		None = 0,
		CurrentPlayerNearest = 1,
		OwnerNearest = 2,
	};
}

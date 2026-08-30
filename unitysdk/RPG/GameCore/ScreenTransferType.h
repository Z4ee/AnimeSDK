#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScreenTransferType_TypeDefinitionIndex = 24502;

	enum class ScreenTransferType : ::System::Int32
	{
		None = 0,
		White = 1,
		Black = 2,
	};
}

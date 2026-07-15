#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScreenTransferType_TypeDefinitionIndex = 23914;

	enum class ScreenTransferType : ::System::Int32
	{
		None = 0,
		White = 1,
		Black = 2,
	};
}

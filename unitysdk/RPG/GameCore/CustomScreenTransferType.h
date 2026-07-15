#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomScreenTransferType_TypeDefinitionIndex = 23630;

	enum class CustomScreenTransferType : ::System::Int32
	{
		None = 0,
		FiveDim = 1,
	};
}

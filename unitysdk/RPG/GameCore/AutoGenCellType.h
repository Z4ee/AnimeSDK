#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AutoGenCellType_TypeDefinitionIndex = 22679;

	enum class AutoGenCellType : ::System::Int32
	{
		Base = 1,
		PCOnly = 2,
		MobileHighOnly = 4,
		All = 7,
	};
}

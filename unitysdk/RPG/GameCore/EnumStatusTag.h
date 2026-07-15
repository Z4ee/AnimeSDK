#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnumStatusTag_TypeDefinitionIndex = 10065;

	enum class EnumStatusTag : ::System::Int32
	{
		Unknown = 0,
		RogueMagicHalo = 1,
	};
}

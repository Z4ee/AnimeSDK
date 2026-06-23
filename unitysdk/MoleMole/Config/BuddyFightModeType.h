#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyFightModeType_TypeDefinitionIndex = 49442;

	enum class BuddyFightModeType : ::System::Int32
	{
		Follow = 0,
		Attack = 1,
	};
}

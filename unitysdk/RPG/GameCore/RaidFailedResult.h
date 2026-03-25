#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidFailedResult_TypeDefinitionIndex = 13313;

	enum class RaidFailedResult : ::System::Int32
	{
		Unknown = 0,
		ReturnAnchor = 1,
	};
}

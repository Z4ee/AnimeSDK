#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int NavSpaceType_TypeDefinitionIndex = 61285;

	enum class NavSpaceType : ::System::Int32
	{
		Invalid = 0,
		Normal = 1,
		FiveDim = 2,
	};
}

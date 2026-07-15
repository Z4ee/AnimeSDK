#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int NavAreaType_TypeDefinitionIndex = 71125;

	enum class NavAreaType : ::System::Int32
	{
		Normal = 0,
		FiveDim = 1,
	};
}

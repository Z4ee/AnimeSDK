#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MapNpcType_TypeDefinitionIndex = 59381;

	enum class MapNpcType : ::System::Int32
	{
		Normal = 0,
		Monster = 1,
	};
}

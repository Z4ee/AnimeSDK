#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRegionType_TypeDefinitionIndex = 23576;

	enum class StageRegionType : ::System::Int32
	{
		Normal = 0,
		Tunnel = 1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRegionLoadType_TypeDefinitionIndex = 23578;

	enum class StageRegionLoadType : ::System::Int32
	{
		Distance = 0,
		Volume = 1,
		Always = 2,
	};
}

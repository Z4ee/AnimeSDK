#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BEActionBarType_TypeDefinitionIndex = 12369;

	enum class BEActionBarType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		CustomHeadIcon = 2,
		Sandglass = 3,
	};
}

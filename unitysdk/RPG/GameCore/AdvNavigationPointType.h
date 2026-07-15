#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNavigationPointType_TypeDefinitionIndex = 54561;

	enum class AdvNavigationPointType : ::System::Int32
	{
		None = 0,
		Start = 1,
		End = 2,
		Link = 4,
	};
}

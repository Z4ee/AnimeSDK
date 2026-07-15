#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RegionVisibility_TypeDefinitionIndex = 59430;

	enum class RegionVisibility : ::System::Int32
	{
		Hidden = 0,
		Visible = 1,
	};
}

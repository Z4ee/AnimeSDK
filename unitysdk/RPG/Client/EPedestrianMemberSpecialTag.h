#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EPedestrianMemberSpecialTag_TypeDefinitionIndex = 66168;

	enum class EPedestrianMemberSpecialTag : ::System::Int32
	{
		None = 0,
		Floating = 1,
		MaterialShowParts = 2,
		BatchAnimation = 3,
		MaterialVariants = 4,
	};
}

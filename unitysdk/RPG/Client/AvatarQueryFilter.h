#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarQueryFilter_TypeDefinitionIndex = 57840;

	enum class AvatarQueryFilter : ::System::Int32
	{
		None = 0,
		Obtained = 1,
		NotObtained = 2,
		CurrentPath = 4,
		OtherPath = 8,
		Default = 5,
		All = 15,
	};
}

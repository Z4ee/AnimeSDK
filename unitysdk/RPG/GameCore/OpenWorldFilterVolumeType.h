#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenWorldFilterVolumeType_TypeDefinitionIndex = 24158;

	enum class OpenWorldFilterVolumeType : ::System::Int32
	{
		None = 0,
		Select = 1,
		Filter = 2,
	};
}

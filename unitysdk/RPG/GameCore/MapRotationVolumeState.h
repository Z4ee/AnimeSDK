#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationVolumeState_TypeDefinitionIndex = 15609;

	enum class MapRotationVolumeState : ::System::Int32
	{
		Unused = 0,
		Used = 1,
	};
}

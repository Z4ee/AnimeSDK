#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int VolumeType_TypeDefinitionIndex = 17556;

	enum class VolumeType : ::System::Int32
	{
		Unknown = 0,
		Polygon = 1,
		OBB = 2,
	};
}

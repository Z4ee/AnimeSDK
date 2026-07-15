#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapCameraType_TypeDefinitionIndex = 16485;

	enum class MapCameraType : ::System::Int32
	{
		Base = 0,
		Maze = 1,
		Room = 2,
		LargeSpace = 3,
	};
}

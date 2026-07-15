#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainCameraType_TypeDefinitionIndex = 23872;

	enum class MainCameraType : ::System::Int32
	{
		MainCamera = 0,
		UI3DCamera = 1,
	};
}

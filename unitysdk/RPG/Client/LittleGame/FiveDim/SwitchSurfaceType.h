#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int SwitchSurfaceType_TypeDefinitionIndex = 40832;

	enum class SwitchSurfaceType : ::System::Int32
	{
		Unknown = 0,
		Outside = 1,
		Inside = 2,
	};
}

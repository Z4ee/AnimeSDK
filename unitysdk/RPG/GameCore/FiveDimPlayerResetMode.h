#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerResetMode_TypeDefinitionIndex = 17800;

	enum class FiveDimPlayerResetMode : ::System::Int32
	{
		LastStableGround = 0,
		CameraViewPort = 1,
	};
}

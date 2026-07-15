#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCameraFollowClampMask_TypeDefinitionIndex = 17883;

	enum class FiveDimCameraFollowClampMask : ::System::UInt32
	{
		None = 0x0,
		Left = 0x1,
		Down = 0x2,
		Right = 0x4,
		Up = 0x8,
	};
}

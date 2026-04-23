#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraLerpBackType_TypeDefinitionIndex = 64182;

	enum class CameraLerpBackType : ::System::Int32
	{
		None = 0,
		Slow = 1,
		Fast = 2,
	};
}

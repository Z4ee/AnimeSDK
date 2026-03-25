#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AnimRayCastBindType_TypeDefinitionIndex = 49310;

	enum class AnimRayCastBindType : ::System::Int32
	{
		AnimState = 0,
		AnimClip = 1,
	};
}

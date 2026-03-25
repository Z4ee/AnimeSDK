#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUI3DTouch_MouseWheelType_TypeDefinitionIndex = 59832;

	enum class MonoUI3DTouch_MouseWheelType : ::System::Int32
	{
		None = 0,
		Zoom = 1,
		Scroll = 2,
	};
}

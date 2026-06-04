#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MotionFlag_TypeDefinitionIndex = 68632;

	enum class MotionFlag : ::System::UInt16
	{
		Transform = 0x0,
		Text = 0x1,
	};
}

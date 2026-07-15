#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FrameCaptureFadeoutType_TypeDefinitionIndex = 23849;

	enum class FrameCaptureFadeoutType : ::System::Int32
	{
		None = 0,
		Default = 1,
		Dissolve = 2,
	};
}

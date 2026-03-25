#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAnimSplitFrameEventType_TypeDefinitionIndex = 44818;

	enum class EAnimSplitFrameEventType : ::System::Int32
	{
		Unknown = 0,
		Effect = 1,
		Sound = 2,
		Max = 3,
	};
}

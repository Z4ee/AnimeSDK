#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EAIActionTagHandlerSource_TypeDefinitionIndex = 83159;

	enum class EAIActionTagHandlerSource : ::System::Byte
	{
		PathMask = 0x1,
		TagAction = 0x2,
		Unknown = 0x0,
	};
}

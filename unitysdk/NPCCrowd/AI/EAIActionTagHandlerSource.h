#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EAIActionTagHandlerSource_TypeDefinitionIndex = 90976;

	enum class EAIActionTagHandlerSource : ::System::Byte
	{
		TagAction = 0x2,
		PathMask = 0x1,
		Unknown = 0x0,
	};
}

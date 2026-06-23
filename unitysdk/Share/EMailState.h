#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMailState_TypeDefinitionIndex = 14925;

	enum class EMailState : ::System::Byte
	{
		Removed = 0x4,
		Read = 0x2,
		New = 0x0,
		Awarded = 0x3,
		Old = 0x1,
	};
}

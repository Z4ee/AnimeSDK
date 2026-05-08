#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMailState_TypeDefinitionIndex = 12292;

	enum class EMailState : ::System::Byte
	{
		Read = 0x2,
		Removed = 0x4,
		Old = 0x1,
		New = 0x0,
		Awarded = 0x3,
	};
}

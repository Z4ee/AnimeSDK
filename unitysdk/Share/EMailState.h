#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMailState_TypeDefinitionIndex = 10744;

	enum class EMailState : ::System::Byte
	{
		Removed = 0x4,
		Awarded = 0x3,
		New = 0x0,
		Read = 0x2,
		Old = 0x1,
	};
}

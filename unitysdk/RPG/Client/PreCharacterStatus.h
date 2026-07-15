#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PreCharacterStatus_TypeDefinitionIndex = 62718;

	enum class PreCharacterStatus : ::System::UInt32
	{
		INVALID = 0x0,
		PRE_RELEASE = 0x1,
		ALREADY_POSSESS = 0x2,
		NOT_YET_POSSESS = 0x3,
		OUT_OF_RELEASE = 0x4,
	};
}

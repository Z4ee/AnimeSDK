#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SectionType_TypeDefinitionIndex = 39388;

	enum class SectionType : ::System::UInt32
	{
		Fixed = 0x0,
		String = 0x1,
		Binary = 0x2,
	};
}

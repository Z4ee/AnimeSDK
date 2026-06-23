#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CompareConditionType_TypeDefinitionIndex = 64048;

	enum class CompareConditionType : ::System::Byte
	{
		IfNot = 0x2,
		Greater = 0x3,
		NotEqual = 0x7,
		Equals = 0x6,
		GreaterEquals = 0x9,
		LessEquals = 0xA,
		If = 0x1,
		Less = 0x4,
	};
}

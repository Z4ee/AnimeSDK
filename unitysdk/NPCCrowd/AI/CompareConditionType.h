#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CompareConditionType_TypeDefinitionIndex = 76434;

	enum class CompareConditionType : ::System::Byte
	{
		IfNot = 0x2,
		Less = 0x4,
		NotEqual = 0x7,
		If = 0x1,
		Greater = 0x3,
		Equals = 0x6,
		LessEquals = 0xA,
		GreaterEquals = 0x9,
	};
}

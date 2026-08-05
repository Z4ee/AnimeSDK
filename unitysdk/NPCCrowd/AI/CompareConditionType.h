#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CompareConditionType_TypeDefinitionIndex = 68563;

	enum class CompareConditionType : ::System::Byte
	{
		GreaterEquals = 0x9,
		Equals = 0x6,
		If = 0x1,
		Less = 0x4,
		LessEquals = 0xA,
		Greater = 0x3,
		NotEqual = 0x7,
		IfNot = 0x2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int ConditionType_TypeDefinitionIndex = 8508;

	enum class ConditionType : ::System::Byte
	{
		IfNot = 0x2,
		GreaterEquals = 0x9,
		NotEqual = 0x7,
		If = 0x1,
		LessEquals = 0xA,
		None = 0x0,
		Less = 0x4,
		Greater = 0x3,
		Max = 0xB,
		Equals = 0x6,
	};
}

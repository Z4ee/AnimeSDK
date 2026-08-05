#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int ConditionType_TypeDefinitionIndex = 8592;

	enum class ConditionType : ::System::Byte
	{
		NotEqual = 0x7,
		None = 0x0,
		Max = 0xB,
		Less = 0x4,
		Greater = 0x3,
		LessEquals = 0xA,
		GreaterEquals = 0x9,
		IfNot = 0x2,
		If = 0x1,
		Equals = 0x6,
	};
}

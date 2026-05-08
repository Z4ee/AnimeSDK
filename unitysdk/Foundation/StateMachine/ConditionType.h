#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int ConditionType_TypeDefinitionIndex = 9087;

	enum class ConditionType : ::System::Byte
	{
		GreaterEquals = 0x9,
		Equals = 0x6,
		LessEquals = 0xA,
		If = 0x1,
		NotEqual = 0x7,
		Less = 0x4,
		Greater = 0x3,
		IfNot = 0x2,
		Max = 0xB,
		None = 0x0,
	};
}

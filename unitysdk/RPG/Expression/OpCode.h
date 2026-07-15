#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Expression
{
	inline static constexpr unsigned int OpCode_TypeDefinitionIndex = 10011;

	enum class OpCode : ::System::Byte
	{
		Constant = 0x0,
		GetGlobal = 0x1,
		Add = 0x2,
		Subtract = 0x3,
		Multiply = 0x4,
		Divide = 0x5,
		Modulo = 0x6,
		Equal = 0x7,
		NotEqual = 0x8,
		Less = 0x9,
		Greater = 0xA,
		LessOrEqual = 0xB,
		GreaterOrEqual = 0xC,
		TernaryCondition = 0xD,
		Negative = 0xE,
		Not = 0xF,
		Call = 0x10,
		Return = 0x11,
	};
}

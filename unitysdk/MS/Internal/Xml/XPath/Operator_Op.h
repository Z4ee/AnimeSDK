#pragma once
#include "unitysdk/unitysdk.h"

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Operator_Op_TypeDefinitionIndex = 1647;

	enum class Operator_Op : ::System::Int32
	{
		INVALID = 0,
		OR = 1,
		AND = 2,
		EQ = 3,
		NE = 4,
		LT = 5,
		LE = 6,
		GT = 7,
		GE = 8,
		PLUS = 9,
		MINUS = 10,
		MUL = 11,
		DIV = 12,
		MOD = 13,
		UNION = 14,
	};
}

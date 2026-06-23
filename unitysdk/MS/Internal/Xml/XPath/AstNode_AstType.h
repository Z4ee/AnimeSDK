#pragma once
#include "unitysdk/unitysdk.h"

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int AstNode_AstType_TypeDefinitionIndex = 1638;

	enum class AstNode_AstType : ::System::Int32
	{
		Axis = 0,
		Operator = 1,
		Filter = 2,
		ConstantOperand = 3,
		Function = 4,
		Group = 5,
		Root = 6,
		Variable = 7,
		Error = 8,
	};
}

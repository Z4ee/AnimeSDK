#pragma once
#include "unitysdk/unitysdk.h"

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Function_FunctionType_TypeDefinitionIndex = 1643;

	enum class Function_FunctionType : ::System::Int32
	{
		FuncLast = 0,
		FuncPosition = 1,
		FuncCount = 2,
		FuncID = 3,
		FuncLocalName = 4,
		FuncNameSpaceUri = 5,
		FuncName = 6,
		FuncString = 7,
		FuncBoolean = 8,
		FuncNumber = 9,
		FuncTrue = 10,
		FuncFalse = 11,
		FuncNot = 12,
		FuncConcat = 13,
		FuncStartsWith = 14,
		FuncContains = 15,
		FuncSubstringBefore = 16,
		FuncSubstringAfter = 17,
		FuncSubstring = 18,
		FuncStringLength = 19,
		FuncNormalize = 20,
		FuncTranslate = 21,
		FuncLang = 22,
		FuncSum = 23,
		FuncFloor = 24,
		FuncCeiling = 25,
		FuncRound = 26,
		FuncUserDefined = 27,
	};
}

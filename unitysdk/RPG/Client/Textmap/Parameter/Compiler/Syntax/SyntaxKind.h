#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Textmap::Parameter::Compiler::Syntax
{
	inline static constexpr unsigned int SyntaxKind_TypeDefinitionIndex = 68562;

	enum class SyntaxKind : ::System::Int32
	{
		None = 0,
		List = 1,
		HashToken = 2,
		LBraceToken = 3,
		RBraceToken = 4,
		ColonToken = 5,
		LBracketToken = 6,
		RBracketToken = 7,
		PercentToken = 8,
		UnparsedTextToken = 9,
		NumberLiteralToken = 10,
		PlainTextToken = 11,
		ExtendedParameterTypeToken = 12,
		ExtendedParameterArgsToken = 13,
		ParameterIntegerFormatModeToken = 14,
		ParameterFloatFormatModeToken = 15,
		ParameterMetricFormatModeToken = 16,
		EndOfInputToken = 17,
		BadToken = 18,
		CompilationUnit = 19,
		IndexedParameter = 20,
		ExtendedParameter = 21,
		ParameterIntegerFormat = 22,
		ParameterFloatFormat = 23,
		ParameterMetricFormat = 24,
	};
}

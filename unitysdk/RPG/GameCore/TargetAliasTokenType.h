#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetAliasTokenType_TypeDefinitionIndex = 56440;

	enum class TargetAliasTokenType : ::System::Int32
	{
		LeftParen = 0,
		RightParen = 1,
		Plus = 2,
		Minus = 3,
		And = 4,
		Or = 5,
		Dot = 6,
		Identifier = 7,
		Comma = 8,
		Eof = 9,
		Error = 10,
		Count = 11,
	};
}

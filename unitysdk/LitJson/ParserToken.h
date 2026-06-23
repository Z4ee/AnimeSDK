#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int ParserToken_TypeDefinitionIndex = 7779;

	enum class ParserToken : ::System::Int32
	{
		PairRest = 65547,
		CharSeq = 65541,
		ObjectPrime = 65545,
		String = 65552,
		Object = 65544,
		None = 65536,
		Epsilon = 65555,
		Pair = 65546,
		Char = 65542,
		False = 65539,
		ValueRest = 65551,
		Value = 65550,
		End = 65554,
		True = 65538,
		Comment = 65553,
		ArrayPrime = 65549,
		Text = 65543,
		Null = 65540,
		Array = 65548,
		Number = 65537,
	};
}

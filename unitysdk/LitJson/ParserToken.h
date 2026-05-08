#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int ParserToken_TypeDefinitionIndex = 7870;

	enum class ParserToken : ::System::Int32
	{
		True = 65538,
		Object = 65544,
		ArrayPrime = 65549,
		PairRest = 65547,
		Array = 65548,
		Char = 65542,
		Comment = 65553,
		End = 65554,
		Number = 65537,
		CharSeq = 65541,
		Null = 65540,
		String = 65552,
		Value = 65550,
		Epsilon = 65555,
		Pair = 65546,
		None = 65536,
		ValueRest = 65551,
		Text = 65543,
		ObjectPrime = 65545,
		False = 65539,
	};
}

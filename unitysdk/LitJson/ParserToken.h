#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int ParserToken_TypeDefinitionIndex = 7834;

	enum class ParserToken : ::System::Int32
	{
		Array = 65548,
		Comment = 65553,
		ObjectPrime = 65545,
		Object = 65544,
		End = 65554,
		False = 65539,
		Epsilon = 65555,
		Char = 65542,
		None = 65536,
		Pair = 65546,
		True = 65538,
		CharSeq = 65541,
		PairRest = 65547,
		ValueRest = 65551,
		Number = 65537,
		Value = 65550,
		String = 65552,
		Text = 65543,
		ArrayPrime = 65549,
		Null = 65540,
	};
}

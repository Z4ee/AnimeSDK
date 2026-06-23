#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int TinyJsonToken_TypeDefinitionIndex = 30267;

	enum class TinyJsonToken : ::System::Int32
	{
		String = 6,
		True = 7,
		StartObject = 1,
		Number = 5,
		False = 8,
		Null = 9,
		EndArray = 4,
		EndObject = 2,
		None = 0,
		StartArray = 3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int TinyJsonToken_TypeDefinitionIndex = 30029;

	enum class TinyJsonToken : ::System::Int32
	{
		False = 8,
		StartObject = 1,
		EndObject = 2,
		None = 0,
		StartArray = 3,
		EndArray = 4,
		True = 7,
		Null = 9,
		Number = 5,
		String = 6,
	};
}

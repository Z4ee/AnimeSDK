#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int TinyJsonToken_TypeDefinitionIndex = 27731;

	enum class TinyJsonToken : ::System::Int32
	{
		StartArray = 3,
		True = 7,
		False = 8,
		EndObject = 2,
		StartObject = 1,
		None = 0,
		Number = 5,
		Null = 9,
		EndArray = 4,
		String = 6,
	};
}

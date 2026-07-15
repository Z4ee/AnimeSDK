#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Google::Protobuf
{
	inline static constexpr unsigned int ObjectIntPair_1_TypeDefinitionIndex = 5415;

	template <typename T>
	struct ObjectIntPair_1
	{
		::System::Int32 number; // 0x0
		T obj; // 0x0
	};
}

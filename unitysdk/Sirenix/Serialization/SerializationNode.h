#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/EntryType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SerializationNode_TypeDefinitionIndex = 7428;

	struct alignas(8) SerializationNode
	{
		::System::String* Name; // 0x10
		::Sirenix::Serialization::EntryType Entry; // 0x18
		::System::String* Data; // 0x20
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace System::Collections
{
	inline static constexpr unsigned int Hashtable_bucket_TypeDefinitionIndex = 1466;

	struct alignas(8) Hashtable_bucket
	{
		::System::Object* key; // 0x10
		::System::Object* val; // 0x18
		::System::Int32 hash_coll; // 0x20
	};
}

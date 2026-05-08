#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1_Entry; }
namespace System { class String; }
namespace System { class Type; }

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ThreadsafeTypeKeyHashTable_1_Entry_TypeDefinitionIndex = 27729;

	template <typename TValue>
	class ThreadsafeTypeKeyHashTable_1_Entry : public ::System::Object
	{
	public:
		::System::Type* Key; // 0x0
		TValue Value; // 0x0
		::System::Int32 Hash; // 0x0
		::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1_Entry<TValue>* Next; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1_Entry; }
namespace System { class String; }
namespace System { class Type; }

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ThreadsafeTypeKeyHashTable_1_Entry_TypeDefinitionIndex = 7261;

	template <typename TValue>
	class ThreadsafeTypeKeyHashTable_1_Entry : public ::System::Object
	{
	public:
		::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1_Entry<TValue>* Next; // 0x0
		::System::Type* _Key_k__BackingField; // 0x0
		TValue _Value_k__BackingField; // 0x0
		::System::Int32 _Hash_k__BackingField; // 0x0
	};
}

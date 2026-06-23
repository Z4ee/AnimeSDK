#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Internal { template <typename T> class AnonymousDeserializeFunc_1; }
namespace MessagePack::Internal { template <typename T> class AnonymousSerializeFunc_1; }

namespace MessagePack::Internal
{
	inline static constexpr unsigned int AnonymousSerializableFormatter_1_TypeDefinitionIndex = 30361;

	template <typename T>
	class AnonymousSerializableFormatter_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::Il2CppArray<::System::Byte>*>* stringByteKeysField; // 0x0
		::Il2CppArray<::System::Object*>* serializeCustomFormatters; // 0x0
		::Il2CppArray<::System::Object*>* deserializeCustomFormatters; // 0x0
		::MessagePack::Internal::AnonymousSerializeFunc_1<T>* serialize; // 0x0
		::MessagePack::Internal::AnonymousDeserializeFunc_1<T>* deserialize; // 0x0
	};
}

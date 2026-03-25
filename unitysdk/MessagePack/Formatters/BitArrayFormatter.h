#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Collections { class BitArray; }

#define MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D2B420)
#define MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D2B380)
#define MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D2B550)
#define MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D2B370)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int BitArrayFormatter_TypeDefinitionIndex = 9348;

	class BitArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::BitArray*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::BitArray*>**)Il2CppClass::FromTypeDefinitionIndex(BitArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x20C60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Collections::BitArray* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Collections::BitArray*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Collections::BitArray* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Collections::BitArray*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

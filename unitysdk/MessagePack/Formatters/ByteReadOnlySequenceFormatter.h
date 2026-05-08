#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A848170)
#define MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A847FC0)
#define MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8485E0)
#define MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A847FB0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteReadOnlySequenceFormatter_TypeDefinitionIndex = 27898;

	class ByteReadOnlySequenceFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteReadOnlySequenceFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteReadOnlySequenceFormatter**)Il2CppClass::FromTypeDefinitionIndex(ByteReadOnlySequenceFormatter_TypeDefinitionIndex)->GetStaticField(0x201B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Buffers::ReadOnlySequence_1<::System::Byte> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Buffers::ReadOnlySequence_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Buffers::ReadOnlySequence_1<::System::Byte> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Buffers::ReadOnlySequence_1<::System::Byte>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

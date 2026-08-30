#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1666DF70)
#define MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1666DDD0)
#define MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1666E010)
#define MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1666DDC0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteReadOnlySequenceFormatter_TypeDefinitionIndex = 7321;

	class ByteReadOnlySequenceFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteReadOnlySequenceFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteReadOnlySequenceFormatter**)Il2CppClass::FromTypeDefinitionIndex(ByteReadOnlySequenceFormatter_TypeDefinitionIndex)->GetStaticField(0x33EE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Buffers::ReadOnlySequence_1<::System::Byte> a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Buffers::ReadOnlySequence_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Buffers::ReadOnlySequence_1<::System::Byte> Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Buffers::ReadOnlySequence_1<::System::Byte>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

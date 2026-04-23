#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17329E40)
#define MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17329DA0)
#define MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17329F10)
#define MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17329D90)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteArraySegmentFormatter_TypeDefinitionIndex = 9427;

	class ByteArraySegmentFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteArraySegmentFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteArraySegmentFormatter**)Il2CppClass::FromTypeDefinitionIndex(ByteArraySegmentFormatter_TypeDefinitionIndex)->GetStaticField(0x41770);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::ArraySegment_1<::System::Byte> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::ArraySegment_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::ArraySegment_1<::System::Byte> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

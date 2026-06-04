#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x181386F0)
#define MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x18138650)
#define MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x181387C0)
#define MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18138640)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteArraySegmentFormatter_TypeDefinitionIndex = 7330;

	class ByteArraySegmentFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteArraySegmentFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteArraySegmentFormatter**)Il2CppClass::FromTypeDefinitionIndex(ByteArraySegmentFormatter_TypeDefinitionIndex)->GetStaticField(0x86B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::ArraySegment_1<::System::Byte> a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::ArraySegment_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::ArraySegment_1<::System::Byte> Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYSEGMENTFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

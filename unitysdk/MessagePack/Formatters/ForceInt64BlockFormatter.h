#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DB960A0)
#define MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DB96090)
#define MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB960B0)
#define MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB96080)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceInt64BlockFormatter_TypeDefinitionIndex = 29370;

	class ForceInt64BlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceInt64BlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceInt64BlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceInt64BlockFormatter_TypeDefinitionIndex)->GetStaticField(0x247F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Int64 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Int64, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Int64 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Int64(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

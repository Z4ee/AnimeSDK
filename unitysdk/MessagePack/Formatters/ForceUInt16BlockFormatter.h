#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B49E280)
#define MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B49E270)
#define MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B49E290)
#define MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49E260)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceUInt16BlockFormatter_TypeDefinitionIndex = 26637;

	class ForceUInt16BlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceUInt16BlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceUInt16BlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceUInt16BlockFormatter_TypeDefinitionIndex)->GetStaticField(0x20DF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::UInt16 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::UInt16, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::UInt16 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::UInt16(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

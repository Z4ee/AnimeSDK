#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B49E360)
#define MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B49E350)
#define MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B49E370)
#define MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49E340)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceUInt64BlockFormatter_TypeDefinitionIndex = 26923;

	class ForceUInt64BlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceUInt64BlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceUInt64BlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceUInt64BlockFormatter_TypeDefinitionIndex)->GetStaticField(0x20E10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::UInt64 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::UInt64, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::UInt64 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::UInt64(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

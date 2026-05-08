#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_INT32FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B459AF0)
#define MESSAGEPACK_FORMATTERS_INT32FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B459AE0)
#define MESSAGEPACK_FORMATTERS_INT32FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B459B00)
#define MESSAGEPACK_FORMATTERS_INT32FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B459AD0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Int32Formatter_TypeDefinitionIndex = 28083;

	class Int32Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::Int32Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::Int32Formatter**)Il2CppClass::FromTypeDefinitionIndex(Int32Formatter_TypeDefinitionIndex)->GetStaticField(0x20760);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Int32 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Int32, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Int32 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

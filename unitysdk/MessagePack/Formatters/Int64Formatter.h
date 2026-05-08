#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_INT64FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1F5460)
#define MESSAGEPACK_FORMATTERS_INT64FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1F5450)
#define MESSAGEPACK_FORMATTERS_INT64FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1F5470)
#define MESSAGEPACK_FORMATTERS_INT64FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F5440)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Int64Formatter_TypeDefinitionIndex = 27974;

	class Int64Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::Int64Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::Int64Formatter**)Il2CppClass::FromTypeDefinitionIndex(Int64Formatter_TypeDefinitionIndex)->GetStaticField(0x1FB10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT64FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT64FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Int64 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Int64, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT64FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Int64 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Int64(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT64FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

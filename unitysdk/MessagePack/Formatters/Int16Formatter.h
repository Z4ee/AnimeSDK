#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_INT16FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BC522F0)
#define MESSAGEPACK_FORMATTERS_INT16FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BC522E0)
#define MESSAGEPACK_FORMATTERS_INT16FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC52300)
#define MESSAGEPACK_FORMATTERS_INT16FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC522D0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Int16Formatter_TypeDefinitionIndex = 30846;

	class Int16Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::Int16Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::Int16Formatter**)Il2CppClass::FromTypeDefinitionIndex(Int16Formatter_TypeDefinitionIndex)->GetStaticField(0x24280);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Int16 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Int16, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Int16 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Int16(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

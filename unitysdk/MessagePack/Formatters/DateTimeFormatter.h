#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D2D810)
#define MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D2D800)
#define MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D2D8B0)
#define MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D2D7F0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DateTimeFormatter_TypeDefinitionIndex = 9333;

	class DateTimeFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::DateTimeFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::DateTimeFormatter**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormatter_TypeDefinitionIndex)->GetStaticField(0x20DF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::DateTime value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::DateTime, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::DateTime Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::DateTime(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

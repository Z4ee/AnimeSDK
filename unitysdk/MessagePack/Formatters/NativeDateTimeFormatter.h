#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NATIVEDATETIMEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DB29CD0)
#define MESSAGEPACK_FORMATTERS_NATIVEDATETIMEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DB29C70)
#define MESSAGEPACK_FORMATTERS_NATIVEDATETIMEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB29D00)
#define MESSAGEPACK_FORMATTERS_NATIVEDATETIMEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB29CF0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NativeDateTimeFormatter_TypeDefinitionIndex = 30227;

	class NativeDateTimeFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NativeDateTimeFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NativeDateTimeFormatter**)Il2CppClass::FromTypeDefinitionIndex(NativeDateTimeFormatter_TypeDefinitionIndex)->GetStaticField(0x26100);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEDATETIMEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEDATETIMEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::DateTime value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::DateTime, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEDATETIMEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::DateTime Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::DateTime(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEDATETIMEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

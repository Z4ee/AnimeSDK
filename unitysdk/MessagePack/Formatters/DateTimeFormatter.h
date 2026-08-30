#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B671F90)
#define MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B671F80)
#define MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B672030)
#define MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B671F70)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DateTimeFormatter_TypeDefinitionIndex = 7425;

	class DateTimeFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::DateTimeFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::DateTimeFormatter**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormatter_TypeDefinitionIndex)->GetStaticField(0x29F10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::DateTime a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::DateTime, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::DateTime Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::DateTime(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

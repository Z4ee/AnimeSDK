#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B671D40)
#define MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B671C90)
#define MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B671F30)
#define MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B671C80)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DateTimeArrayFormatter_TypeDefinitionIndex = 7427;

	class DateTimeArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::DateTimeArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::DateTimeArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(DateTimeArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x29F00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Il2CppArray<::System::DateTime>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::DateTime>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::DateTime>* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::DateTime>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

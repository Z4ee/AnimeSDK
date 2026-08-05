#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NATIVEDATETIMEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB80F90)
#define MESSAGEPACK_FORMATTERS_NATIVEDATETIMEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB80EC0)
#define MESSAGEPACK_FORMATTERS_NATIVEDATETIMEARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB81070)
#define MESSAGEPACK_FORMATTERS_NATIVEDATETIMEARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB81060)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NativeDateTimeArrayFormatter_TypeDefinitionIndex = 30523;

	class NativeDateTimeArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NativeDateTimeArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NativeDateTimeArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(NativeDateTimeArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x25870);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEDATETIMEARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEDATETIMEARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::DateTime>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::DateTime>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEDATETIMEARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::DateTime>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::DateTime>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEDATETIMEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

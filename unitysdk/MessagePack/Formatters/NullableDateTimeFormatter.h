#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18143A60)
#define MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x18143A40)
#define MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18143BA0)
#define MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18143A30)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableDateTimeFormatter_TypeDefinitionIndex = 7434;

	class NullableDateTimeFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableDateTimeFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableDateTimeFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableDateTimeFormatter_TypeDefinitionIndex)->GetStaticField(0x8B30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Nullable_1<::System::DateTime> a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::DateTime>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable_1<::System::DateTime> Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Nullable_1<::System::DateTime>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

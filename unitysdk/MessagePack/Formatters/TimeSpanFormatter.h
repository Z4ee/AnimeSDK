#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1667E2E0)
#define MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1667E2D0)
#define MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1667E380)
#define MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1667E2C0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int TimeSpanFormatter_TypeDefinitionIndex = 7433;

	class TimeSpanFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::TimeSpan>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::TimeSpan>**)Il2CppClass::FromTypeDefinitionIndex(TimeSpanFormatter_TypeDefinitionIndex)->GetStaticField(0x35580);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::TimeSpan a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::TimeSpan, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::TimeSpan Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

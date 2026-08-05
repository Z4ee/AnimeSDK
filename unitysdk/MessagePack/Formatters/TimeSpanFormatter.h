#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DB2A090)
#define MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DB2A080)
#define MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB2A0A0)
#define MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2A070)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int TimeSpanFormatter_TypeDefinitionIndex = 29868;

	class TimeSpanFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::TimeSpan>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::TimeSpan>**)Il2CppClass::FromTypeDefinitionIndex(TimeSpanFormatter_TypeDefinitionIndex)->GetStaticField(0x25CF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::TimeSpan value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::TimeSpan, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::TimeSpan Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TIMESPANFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

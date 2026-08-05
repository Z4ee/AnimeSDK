#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_NATIVEDECIMALFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB811E0)
#define MESSAGEPACK_FORMATTERS_NATIVEDECIMALFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB810C0)
#define MESSAGEPACK_FORMATTERS_NATIVEDECIMALFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB814D0)
#define MESSAGEPACK_FORMATTERS_NATIVEDECIMALFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB810B0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NativeDecimalFormatter_TypeDefinitionIndex = 30392;

	class NativeDecimalFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Decimal>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Decimal>**)Il2CppClass::FromTypeDefinitionIndex(NativeDecimalFormatter_TypeDefinitionIndex)->GetStaticField(0x25760);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEDECIMALFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEDECIMALFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Decimal value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Decimal, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEDECIMALFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Decimal Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Decimal(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEDECIMALFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

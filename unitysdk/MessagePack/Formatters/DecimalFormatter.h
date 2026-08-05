#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_DECIMALFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E538AB0)
#define MESSAGEPACK_FORMATTERS_DECIMALFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E5388F0)
#define MESSAGEPACK_FORMATTERS_DECIMALFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5395C0)
#define MESSAGEPACK_FORMATTERS_DECIMALFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5388E0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DecimalFormatter_TypeDefinitionIndex = 29896;

	class DecimalFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::DecimalFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::DecimalFormatter**)Il2CppClass::FromTypeDefinitionIndex(DecimalFormatter_TypeDefinitionIndex)->GetStaticField(0x252A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DECIMALFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DECIMALFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Decimal value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Decimal, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DECIMALFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Decimal Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Decimal(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DECIMALFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

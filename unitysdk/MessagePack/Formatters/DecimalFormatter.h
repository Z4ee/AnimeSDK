#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_DECIMALFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B6725A0)
#define MESSAGEPACK_FORMATTERS_DECIMALFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B672390)
#define MESSAGEPACK_FORMATTERS_DECIMALFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B673130)
#define MESSAGEPACK_FORMATTERS_DECIMALFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B672380)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DecimalFormatter_TypeDefinitionIndex = 7432;

	class DecimalFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::DecimalFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::DecimalFormatter**)Il2CppClass::FromTypeDefinitionIndex(DecimalFormatter_TypeDefinitionIndex)->GetStaticField(0x29F60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DECIMALFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DECIMALFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Decimal a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Decimal, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DECIMALFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Decimal Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Decimal(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DECIMALFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

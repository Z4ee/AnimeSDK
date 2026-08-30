#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B66FA90)
#define MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B66F9D0)
#define MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B66FB30)
#define MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B66F9C0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int BigIntegerFormatter_TypeDefinitionIndex = 7441;

	class BigIntegerFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::BigInteger>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::BigInteger>**)Il2CppClass::FromTypeDefinitionIndex(BigIntegerFormatter_TypeDefinitionIndex)->GetStaticField(0x29AA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Numerics::BigInteger a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Numerics::BigInteger, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Numerics::BigInteger Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

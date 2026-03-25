#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D2B290)
#define MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D2B1D0)
#define MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D2B330)
#define MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D2B1C0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int BigIntegerFormatter_TypeDefinitionIndex = 9349;

	class BigIntegerFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::BigInteger>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::BigInteger>**)Il2CppClass::FromTypeDefinitionIndex(BigIntegerFormatter_TypeDefinitionIndex)->GetStaticField(0x20C30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Numerics::BigInteger value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Numerics::BigInteger, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Numerics::BigInteger Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BIGINTEGERFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

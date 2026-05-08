#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Numerics/Complex.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_COMPLEXFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AF23BB0)
#define MESSAGEPACK_FORMATTERS_COMPLEXFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AF23B70)
#define MESSAGEPACK_FORMATTERS_COMPLEXFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF23CD0)
#define MESSAGEPACK_FORMATTERS_COMPLEXFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF23B60)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ComplexFormatter_TypeDefinitionIndex = 27853;

	class ComplexFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Complex>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Complex>**)Il2CppClass::FromTypeDefinitionIndex(ComplexFormatter_TypeDefinitionIndex)->GetStaticField(0x20960);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_COMPLEXFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_COMPLEXFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Numerics::Complex value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Numerics::Complex, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_COMPLEXFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Numerics::Complex Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Numerics::Complex(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_COMPLEXFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

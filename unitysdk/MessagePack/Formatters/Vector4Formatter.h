#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Numerics/Vector4.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1733B8C0)
#define MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1733B850)
#define MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1733BBA0)
#define MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1733B840)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Vector4Formatter_TypeDefinitionIndex = 9550;

	class Vector4Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Vector4>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(Vector4Formatter_TypeDefinitionIndex)->GetStaticField(0x421B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Numerics::Vector4 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Numerics::Vector4, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Numerics::Vector4 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Numerics::Vector4(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

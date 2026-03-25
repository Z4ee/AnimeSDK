#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Numerics/Matrix4x4.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_MATRIX4X4FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D341A0)
#define MESSAGEPACK_FORMATTERS_MATRIX4X4FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D34080)
#define MESSAGEPACK_FORMATTERS_MATRIX4X4FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D34BF0)
#define MESSAGEPACK_FORMATTERS_MATRIX4X4FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D34070)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Matrix4x4Formatter_TypeDefinitionIndex = 9356;

	class Matrix4x4Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Matrix4x4>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(Matrix4x4Formatter_TypeDefinitionIndex)->GetStaticField(0x20FA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_MATRIX4X4FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_MATRIX4X4FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Numerics::Matrix4x4 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Numerics::Matrix4x4, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_MATRIX4X4FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Numerics::Matrix4x4 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Numerics::Matrix4x4(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_MATRIX4X4FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

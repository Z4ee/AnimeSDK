#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Numerics/Matrix3x2.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_MATRIX3X2FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17331600)
#define MESSAGEPACK_FORMATTERS_MATRIX3X2FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17331570)
#define MESSAGEPACK_FORMATTERS_MATRIX3X2FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17331A20)
#define MESSAGEPACK_FORMATTERS_MATRIX3X2FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17331560)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Matrix3x2Formatter_TypeDefinitionIndex = 9552;

	class Matrix3x2Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Matrix3x2>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Matrix3x2>**)Il2CppClass::FromTypeDefinitionIndex(Matrix3x2Formatter_TypeDefinitionIndex)->GetStaticField(0x41B90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_MATRIX3X2FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_MATRIX3X2FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Numerics::Matrix3x2 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Numerics::Matrix3x2, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_MATRIX3X2FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Numerics::Matrix3x2 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Numerics::Matrix3x2(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_MATRIX3X2FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

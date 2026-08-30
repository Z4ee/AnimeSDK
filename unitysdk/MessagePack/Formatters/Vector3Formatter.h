#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Numerics/Vector3.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B682C30)
#define MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B682BC0)
#define MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B682E80)
#define MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B682BB0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Vector3Formatter_TypeDefinitionIndex = 7444;

	class Vector3Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Vector3>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Vector3Formatter_TypeDefinitionIndex)->GetStaticField(0x2ABD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Numerics::Vector3 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Numerics::Vector3, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Numerics::Vector3 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Numerics::Vector3(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Numerics/Quaternion.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_QUATERNIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1667D4A0)
#define MESSAGEPACK_FORMATTERS_QUATERNIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1667D430)
#define MESSAGEPACK_FORMATTERS_QUATERNIONFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1667D780)
#define MESSAGEPACK_FORMATTERS_QUATERNIONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1667D420)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int QuaternionFormatter_TypeDefinitionIndex = 7446;

	class QuaternionFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Quaternion>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(QuaternionFormatter_TypeDefinitionIndex)->GetStaticField(0x353E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_QUATERNIONFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_QUATERNIONFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Numerics::Quaternion a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Numerics::Quaternion, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_QUATERNIONFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Numerics::Quaternion Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Numerics::Quaternion(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_QUATERNIONFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

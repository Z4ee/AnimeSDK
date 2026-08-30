#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System { class Uri; }

#define MESSAGEPACK_FORMATTERS_URIFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B6828A0)
#define MESSAGEPACK_FORMATTERS_URIFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B6827A0)
#define MESSAGEPACK_FORMATTERS_URIFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6828F0)
#define MESSAGEPACK_FORMATTERS_URIFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B682790)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int UriFormatter_TypeDefinitionIndex = 7436;

	class UriFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Uri*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Uri*>**)Il2CppClass::FromTypeDefinitionIndex(UriFormatter_TypeDefinitionIndex)->GetStaticField(0x2AA00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_URIFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_URIFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Uri* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Uri*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_URIFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Uri* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Uri*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_URIFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System { class Uri; }

#define MESSAGEPACK_FORMATTERS_URIFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D3D840)
#define MESSAGEPACK_FORMATTERS_URIFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D3D740)
#define MESSAGEPACK_FORMATTERS_URIFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D3D890)
#define MESSAGEPACK_FORMATTERS_URIFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D3D730)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int UriFormatter_TypeDefinitionIndex = 9344;

	class UriFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Uri*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Uri*>**)Il2CppClass::FromTypeDefinitionIndex(UriFormatter_TypeDefinitionIndex)->GetStaticField(0x214D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_URIFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_URIFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Uri* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Uri*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_URIFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Uri* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Uri*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_URIFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

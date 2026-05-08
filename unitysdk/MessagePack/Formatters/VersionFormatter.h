#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System { class Version; }

#define MESSAGEPACK_FORMATTERS_VERSIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1F5820)
#define MESSAGEPACK_FORMATTERS_VERSIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1F5740)
#define MESSAGEPACK_FORMATTERS_VERSIONFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1F58F0)
#define MESSAGEPACK_FORMATTERS_VERSIONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F5730)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int VersionFormatter_TypeDefinitionIndex = 27655;

	class VersionFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Version*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Version*>**)Il2CppClass::FromTypeDefinitionIndex(VersionFormatter_TypeDefinitionIndex)->GetStaticField(0x1FB50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VERSIONFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VERSIONFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Version* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Version*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VERSIONFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Version* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Version*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VERSIONFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

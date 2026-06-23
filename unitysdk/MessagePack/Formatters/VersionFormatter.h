#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System { class Version; }

#define MESSAGEPACK_FORMATTERS_VERSIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C621800)
#define MESSAGEPACK_FORMATTERS_VERSIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C621720)
#define MESSAGEPACK_FORMATTERS_VERSIONFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6218E0)
#define MESSAGEPACK_FORMATTERS_VERSIONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C621710)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int VersionFormatter_TypeDefinitionIndex = 30890;

	class VersionFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Version*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Version*>**)Il2CppClass::FromTypeDefinitionIndex(VersionFormatter_TypeDefinitionIndex)->GetStaticField(0x238E0);
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

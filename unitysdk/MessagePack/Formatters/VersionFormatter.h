#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System { class Version; }

#define MESSAGEPACK_FORMATTERS_VERSIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B683300)
#define MESSAGEPACK_FORMATTERS_VERSIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B683270)
#define MESSAGEPACK_FORMATTERS_VERSIONFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B683380)
#define MESSAGEPACK_FORMATTERS_VERSIONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B683260)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int VersionFormatter_TypeDefinitionIndex = 7437;

	class VersionFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Version*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Version*>**)Il2CppClass::FromTypeDefinitionIndex(VersionFormatter_TypeDefinitionIndex)->GetStaticField(0x2AC50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VERSIONFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VERSIONFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Version* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Version*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VERSIONFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Version* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Version*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VERSIONFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

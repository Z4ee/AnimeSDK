#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_GUIDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D403810)
#define MESSAGEPACK_FORMATTERS_GUIDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D403660)
#define MESSAGEPACK_FORMATTERS_GUIDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D403C10)
#define MESSAGEPACK_FORMATTERS_GUIDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D403650)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GuidFormatter_TypeDefinitionIndex = 30133;

	class GuidFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Guid>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(GuidFormatter_TypeDefinitionIndex)->GetStaticField(0x24250);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GUIDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GUIDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Guid value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Guid, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GUIDFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Guid Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Guid(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GUIDFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

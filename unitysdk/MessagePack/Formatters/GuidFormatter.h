#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_GUIDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B6765C0)
#define MESSAGEPACK_FORMATTERS_GUIDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B675880)
#define MESSAGEPACK_FORMATTERS_GUIDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B677360)
#define MESSAGEPACK_FORMATTERS_GUIDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B675870)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GuidFormatter_TypeDefinitionIndex = 7435;

	class GuidFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Guid>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(GuidFormatter_TypeDefinitionIndex)->GetStaticField(0x2A110);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GUIDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GUIDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Guid a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Guid, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GUIDFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Guid Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Guid(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GUIDFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

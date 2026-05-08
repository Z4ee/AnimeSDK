#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_NATIVEGUIDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B7E6560)
#define MESSAGEPACK_FORMATTERS_NATIVEGUIDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B7E6440)
#define MESSAGEPACK_FORMATTERS_NATIVEGUIDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7E6850)
#define MESSAGEPACK_FORMATTERS_NATIVEGUIDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E6430)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NativeGuidFormatter_TypeDefinitionIndex = 27473;

	class NativeGuidFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Guid>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(NativeGuidFormatter_TypeDefinitionIndex)->GetStaticField(0x20360);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEGUIDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEGUIDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Guid value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Guid, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEGUIDFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Guid Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Guid(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NATIVEGUIDFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Dynamic { class ExpandoObject; }

#define MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A299410)
#define MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A299800)
#define MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A299930)
#define MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A299400)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ExpandoObjectFormatter_TypeDefinitionIndex = 27919;

	class ExpandoObjectFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Dynamic::ExpandoObject*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Dynamic::ExpandoObject*>**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObjectFormatter_TypeDefinitionIndex)->GetStaticField(0x1FD70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Dynamic::ExpandoObject* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Dynamic::ExpandoObject*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Dynamic::ExpandoObject* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Dynamic::ExpandoObject*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}
	};
}

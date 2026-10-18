#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Dynamic { class ExpandoObject; }

#define MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB52DA0)
#define MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB53370)
#define MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB53B50)
#define MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB52D90)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ExpandoObjectFormatter_TypeDefinitionIndex = 7430;

	class ExpandoObjectFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Dynamic::ExpandoObject*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Dynamic::ExpandoObject*>**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObjectFormatter_TypeDefinitionIndex)->GetStaticField(0x485E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Dynamic::ExpandoObject* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Dynamic::ExpandoObject*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Dynamic::ExpandoObject* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Dynamic::ExpandoObject*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_EXPANDOOBJECTFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}
	};
}

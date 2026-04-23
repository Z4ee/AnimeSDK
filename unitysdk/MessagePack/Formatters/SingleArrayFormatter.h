#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17339C40)
#define MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17339B10)
#define MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17339E30)
#define MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17339B00)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int SingleArrayFormatter_TypeDefinitionIndex = 9515;

	class SingleArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::SingleArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::SingleArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(SingleArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x41FF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::Single>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Single>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::Single>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

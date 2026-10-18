#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7FBC0)
#define MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7FA90)
#define MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB7FDB0)
#define MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB7FA80)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int SingleArrayFormatter_TypeDefinitionIndex = 7464;

	class SingleArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::SingleArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::SingleArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(SingleArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x254C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Il2CppArray<::System::Single>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Single>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Single>* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

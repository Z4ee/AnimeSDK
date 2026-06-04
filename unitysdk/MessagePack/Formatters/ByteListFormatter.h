#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class ListFormatter_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x181389A0)
#define MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x18138900)
#define MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18138AF0)
#define MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18138AE0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteListFormatter_TypeDefinitionIndex = 7331;

	class ByteListFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ListFormatter_1<::System::Byte>** StaticGet_InnerFormatter()
		{
			return (::MessagePack::Formatters::ListFormatter_1<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ByteListFormatter_TypeDefinitionIndex)->GetStaticField(0x86D0);
		}
		static ::MessagePack::Formatters::ByteListFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteListFormatter**)Il2CppClass::FromTypeDefinitionIndex(ByteListFormatter_TypeDefinitionIndex)->GetStaticField(0x86D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Collections::Generic::List_1<::System::Byte>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Collections::Generic::List_1<::System::Byte>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::Byte>* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Byte>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

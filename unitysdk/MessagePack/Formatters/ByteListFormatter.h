#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class ListFormatter_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D2C700)
#define MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D2C660)
#define MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D2C850)
#define MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D2C840)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteListFormatter_TypeDefinitionIndex = 9231;

	class ByteListFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteListFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteListFormatter**)Il2CppClass::FromTypeDefinitionIndex(ByteListFormatter_TypeDefinitionIndex)->GetStaticField(0x20D30);
		}
		static ::MessagePack::Formatters::ListFormatter_1<::System::Byte>** StaticGet_InnerFormatter()
		{
			return (::MessagePack::Formatters::ListFormatter_1<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ByteListFormatter_TypeDefinitionIndex)->GetStaticField(0x20D38);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Collections::Generic::List_1<::System::Byte>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Collections::Generic::List_1<::System::Byte>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Collections::Generic::List_1<::System::Byte>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Collections::Generic::List_1<::System::Byte>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTELISTFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

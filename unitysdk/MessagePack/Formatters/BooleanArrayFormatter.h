#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D2B960)
#define MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D2B5A0)
#define MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D2BEB0)
#define MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D2B590)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int BooleanArrayFormatter_TypeDefinitionIndex = 9324;

	class BooleanArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::BooleanArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::BooleanArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(BooleanArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x20C80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::Boolean>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Boolean>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::Boolean>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

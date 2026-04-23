#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17330D20)
#define MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17330B50)
#define MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17330F10)
#define MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17330B40)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Int32ArrayFormatter_TypeDefinitionIndex = 9500;

	class Int32ArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::Int32ArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::Int32ArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(Int32ArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x41AE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::Int32>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Int32>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::Int32>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

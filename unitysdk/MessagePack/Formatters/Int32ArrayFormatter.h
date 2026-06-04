#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1813F1B0)
#define MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1813EFF0)
#define MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1813F3A0)
#define MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1813EFE0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Int32ArrayFormatter_TypeDefinitionIndex = 7403;

	class Int32ArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::Int32ArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::Int32ArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(Int32ArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x89A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Il2CppArray<::System::Int32>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Int32>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Int32>* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

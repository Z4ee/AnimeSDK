#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18137C70)
#define MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x181378F0)
#define MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18138190)
#define MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x181378E0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int BooleanArrayFormatter_TypeDefinitionIndex = 7424;

	class BooleanArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::BooleanArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::BooleanArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(BooleanArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x8610);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Il2CppArray<::System::Boolean>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Boolean>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Boolean>* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14F68EB0)
#define MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14F68D80)
#define MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F690A0)
#define MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x14F68D70)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DoubleArrayFormatter_TypeDefinitionIndex = 7427;

	class DoubleArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::DoubleArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::DoubleArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(DoubleArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x8DD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Il2CppArray<::System::Double>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Double>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Double>* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::Double>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

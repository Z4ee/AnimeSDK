#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1667EF90)
#define MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1667EDD0)
#define MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1667F180)
#define MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1667EDC0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int UInt64ArrayFormatter_TypeDefinitionIndex = 7407;

	class UInt64ArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::UInt64ArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::UInt64ArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(UInt64ArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x355F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Il2CppArray<::System::UInt64>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::UInt64>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::UInt64>* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

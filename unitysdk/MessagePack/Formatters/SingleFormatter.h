#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_SINGLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1667E050)
#define MESSAGEPACK_FORMATTERS_SINGLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1667E040)
#define MESSAGEPACK_FORMATTERS_SINGLEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1667E0F0)
#define MESSAGEPACK_FORMATTERS_SINGLEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1667E030)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int SingleFormatter_TypeDefinitionIndex = 7408;

	class SingleFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::SingleFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::SingleFormatter**)Il2CppClass::FromTypeDefinitionIndex(SingleFormatter_TypeDefinitionIndex)->GetStaticField(0x35470);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Single a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Single, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Single(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

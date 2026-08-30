#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B670700)
#define MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B6706F0)
#define MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B670710)
#define MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6706E0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int BooleanFormatter_TypeDefinitionIndex = 7414;

	class BooleanFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::BooleanFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::BooleanFormatter**)Il2CppClass::FromTypeDefinitionIndex(BooleanFormatter_TypeDefinitionIndex)->GetStaticField(0x29B50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Boolean a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Boolean, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

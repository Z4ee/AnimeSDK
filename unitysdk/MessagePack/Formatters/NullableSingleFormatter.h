#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x181445C0)
#define MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x181445A0)
#define MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x181446E0)
#define MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18144590)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableSingleFormatter_TypeDefinitionIndex = 7417;

	class NullableSingleFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableSingleFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableSingleFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableSingleFormatter_TypeDefinitionIndex)->GetStaticField(0x8BC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Nullable_1<::System::Single> a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Single>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable_1<::System::Single> Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

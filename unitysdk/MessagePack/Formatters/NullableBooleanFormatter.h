#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B67C620)
#define MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B67C600)
#define MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B67C6D0)
#define MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B67C5F0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableBooleanFormatter_TypeDefinitionIndex = 7415;

	class NullableBooleanFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableBooleanFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableBooleanFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableBooleanFormatter_TypeDefinitionIndex)->GetStaticField(0x2A5B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Nullable_1<::System::Boolean> a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Boolean>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable_1<::System::Boolean> Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

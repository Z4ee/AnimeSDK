#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x173361C0)
#define MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17336150)
#define MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x173362E0)
#define MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17336140)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableSingleFormatter_TypeDefinitionIndex = 9514;

	class NullableSingleFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableSingleFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableSingleFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableSingleFormatter_TypeDefinitionIndex)->GetStaticField(0x41DF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::Single> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Single>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::Single> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

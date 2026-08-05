#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EA99920)
#define MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EA998C0)
#define MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA99960)
#define MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA998B0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableBooleanFormatter_TypeDefinitionIndex = 30689;

	class NullableBooleanFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableBooleanFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableBooleanFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableBooleanFormatter_TypeDefinitionIndex)->GetStaticField(0x25CA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::Boolean> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Boolean>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::Boolean> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBOOLEANFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

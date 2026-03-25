#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/MessagePack/Nil.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D38560)
#define MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D38550)
#define MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D38580)
#define MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D38540)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableNilFormatter_TypeDefinitionIndex = 9295;

	class NullableNilFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Nullable_1<::MessagePack::Nil>>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Nullable_1<::MessagePack::Nil>>**)Il2CppClass::FromTypeDefinitionIndex(NullableNilFormatter_TypeDefinitionIndex)->GetStaticField(0x211F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::MessagePack::Nil> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::MessagePack::Nil>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::MessagePack::Nil> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::MessagePack::Nil>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

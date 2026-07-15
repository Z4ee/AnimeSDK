#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/MessagePack/Nil.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14F73050)
#define MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14F73040)
#define MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F73070)
#define MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x14F73030)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableNilFormatter_TypeDefinitionIndex = 7401;

	class NullableNilFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Nullable_1<::MessagePack::Nil>>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Nullable_1<::MessagePack::Nil>>**)Il2CppClass::FromTypeDefinitionIndex(NullableNilFormatter_TypeDefinitionIndex)->GetStaticField(0x9210);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Nullable_1<::MessagePack::Nil> a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::MessagePack::Nil>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable_1<::MessagePack::Nil> Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Nullable_1<::MessagePack::Nil>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLENILFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17335FE0)
#define MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17335F80)
#define MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17336100)
#define MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17335F70)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableSByteFormatter_TypeDefinitionIndex = 9525;

	class NullableSByteFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableSByteFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableSByteFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableSByteFormatter_TypeDefinitionIndex)->GetStaticField(0x41D90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::SByte> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::SByte>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::SByte> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::SByte>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

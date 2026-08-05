#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT32BLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DFCD900)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT32BLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DFCD8A0)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT32BLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFCDF90)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT32BLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCD890)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableForceUInt32BlockFormatter_TypeDefinitionIndex = 31032;

	class NullableForceUInt32BlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableForceUInt32BlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableForceUInt32BlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableForceUInt32BlockFormatter_TypeDefinitionIndex)->GetStaticField(0x256C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT32BLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT32BLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::UInt32> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::UInt32>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT32BLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::UInt32> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT32BLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

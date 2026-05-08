#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEFORCESBYTEBLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AF24130)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCESBYTEBLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AF240D0)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCESBYTEBLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF24170)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCESBYTEBLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF240C0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableForceSByteBlockFormatter_TypeDefinitionIndex = 26987;

	class NullableForceSByteBlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableForceSByteBlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableForceSByteBlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableForceSByteBlockFormatter_TypeDefinitionIndex)->GetStaticField(0x20D50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCESBYTEBLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCESBYTEBLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::SByte> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::SByte>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCESBYTEBLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::SByte> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::SByte>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCESBYTEBLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

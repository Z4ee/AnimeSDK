#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CC37170)
#define MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CC37160)
#define MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC37870)
#define MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC37150)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceSByteBlockFormatter_TypeDefinitionIndex = 29206;

	class ForceSByteBlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceSByteBlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceSByteBlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceSByteBlockFormatter_TypeDefinitionIndex)->GetStaticField(0x23F20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::SByte value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::SByte, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::SByte Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::SByte(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

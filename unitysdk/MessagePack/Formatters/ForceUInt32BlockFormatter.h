#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D83E5E0)
#define MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D83E5D0)
#define MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D83E5F0)
#define MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D83E5C0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceUInt32BlockFormatter_TypeDefinitionIndex = 29310;

	class ForceUInt32BlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceUInt32BlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceUInt32BlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceUInt32BlockFormatter_TypeDefinitionIndex)->GetStaticField(0x24B40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::UInt32 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::UInt32, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::UInt32 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

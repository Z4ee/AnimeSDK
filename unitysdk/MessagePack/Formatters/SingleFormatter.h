#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_SINGLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7BDDB0)
#define MESSAGEPACK_FORMATTERS_SINGLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7BDDA0)
#define MESSAGEPACK_FORMATTERS_SINGLEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7BDDC0)
#define MESSAGEPACK_FORMATTERS_SINGLEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BDD90)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int SingleFormatter_TypeDefinitionIndex = 29372;

	class SingleFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::SingleFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::SingleFormatter**)Il2CppClass::FromTypeDefinitionIndex(SingleFormatter_TypeDefinitionIndex)->GetStaticField(0x240A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Single value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Single, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Single Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Single(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

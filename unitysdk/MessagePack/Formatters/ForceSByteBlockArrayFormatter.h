#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7FFE40)
#define MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7FFDC0)
#define MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7FFFB0)
#define MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FFDB0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceSByteBlockArrayFormatter_TypeDefinitionIndex = 29201;

	class ForceSByteBlockArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceSByteBlockArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceSByteBlockArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceSByteBlockArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x23D20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::SByte>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::SByte>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::SByte>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::SByte>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17329900)
#define MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x173298F0)
#define MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17329910)
#define MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x173298E0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int BooleanFormatter_TypeDefinitionIndex = 9519;

	class BooleanFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::BooleanFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::BooleanFormatter**)Il2CppClass::FromTypeDefinitionIndex(BooleanFormatter_TypeDefinitionIndex)->GetStaticField(0x41730);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Boolean value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Boolean, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Boolean Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

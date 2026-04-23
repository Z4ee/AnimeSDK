#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1732C6C0)
#define MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1732C6B0)
#define MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1732C760)
#define MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1732C6A0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DoubleFormatter_TypeDefinitionIndex = 9516;

	class DoubleFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::DoubleFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::DoubleFormatter**)Il2CppClass::FromTypeDefinitionIndex(DoubleFormatter_TypeDefinitionIndex)->GetStaticField(0x419A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Double value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Double, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Double Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Double(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

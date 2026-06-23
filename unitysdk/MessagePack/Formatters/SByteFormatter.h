#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_SBYTEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D81F530)
#define MESSAGEPACK_FORMATTERS_SBYTEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D81F520)
#define MESSAGEPACK_FORMATTERS_SBYTEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D81F540)
#define MESSAGEPACK_FORMATTERS_SBYTEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81F510)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int SByteFormatter_TypeDefinitionIndex = 30528;

	class SByteFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::SByteFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::SByteFormatter**)Il2CppClass::FromTypeDefinitionIndex(SByteFormatter_TypeDefinitionIndex)->GetStaticField(0x242F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::SByte value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::SByte, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::SByte Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::SByte(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D534F10)
#define MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D534F00)
#define MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D534F20)
#define MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D534EF0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceInt32BlockFormatter_TypeDefinitionIndex = 30064;

	class ForceInt32BlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceInt32BlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceInt32BlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceInt32BlockFormatter_TypeDefinitionIndex)->GetStaticField(0x23770);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Int32 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Int32, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Int32 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

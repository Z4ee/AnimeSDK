#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1DFE50)
#define MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1DFDD0)
#define MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1DFF10)
#define MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DFDC0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int SByteArrayFormatter_TypeDefinitionIndex = 30497;

	class SByteArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::SByteArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::SByteArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(SByteArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x24490);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::SByte>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::SByte>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::SByte>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::SByte>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

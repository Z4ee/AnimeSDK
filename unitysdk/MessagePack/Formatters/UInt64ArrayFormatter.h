#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D3D400)
#define MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D3D230)
#define MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D3D5F0)
#define MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D3D220)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int UInt64ArrayFormatter_TypeDefinitionIndex = 9315;

	class UInt64ArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::UInt64ArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::UInt64ArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(UInt64ArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x21490);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::UInt64>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::UInt64>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::UInt64>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT64ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}

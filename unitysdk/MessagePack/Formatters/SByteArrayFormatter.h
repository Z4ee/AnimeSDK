#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18147CF0)
#define MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x18147B30)
#define MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18147EE0)
#define MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18147B20)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int SByteArrayFormatter_TypeDefinitionIndex = 7429;

	class SByteArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::SByteArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::SByteArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(SByteArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x8CD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Il2CppArray<::System::SByte>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::SByte>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::SByte>* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::SByte>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SBYTEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}

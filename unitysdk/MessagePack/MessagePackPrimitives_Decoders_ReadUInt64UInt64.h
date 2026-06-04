#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackPrimitives_DecodeResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64UINT64_READ_OFFSET UNITYSDK_OFFSET(0x18177D30)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64UINT64__CCTOR_OFFSET UNITYSDK_OFFSET(0x18177DA0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64UINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x18177D20)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_Decoders_ReadUInt64UInt64_TypeDefinitionIndex = 7148;

	class MessagePackPrimitives_Decoders_ReadUInt64UInt64 : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackPrimitives_Decoders_ReadUInt64UInt64** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackPrimitives_Decoders_ReadUInt64UInt64**)Il2CppClass::FromTypeDefinitionIndex(MessagePackPrimitives_Decoders_ReadUInt64UInt64_TypeDefinitionIndex)->GetStaticField(0x9BC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64UINT64__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64UINT64__CCTOR_OFFSET))();
		}

		::MessagePack::MessagePackPrimitives_DecodeResult Read(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::UInt64& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt64&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64UINT64_READ_OFFSET))(this, a1, a2, a3);
		}
	};
}

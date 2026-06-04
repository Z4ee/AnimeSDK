#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackPrimitives_DecodeResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT64_READ_OFFSET UNITYSDK_OFFSET(0x181778C0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT64__CCTOR_OFFSET UNITYSDK_OFFSET(0x18177960)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT64__CTOR_OFFSET UNITYSDK_OFFSET(0x181778B0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_Decoders_ReadUInt64Int64_TypeDefinitionIndex = 7152;

	class MessagePackPrimitives_Decoders_ReadUInt64Int64 : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackPrimitives_Decoders_ReadUInt64Int64** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackPrimitives_Decoders_ReadUInt64Int64**)Il2CppClass::FromTypeDefinitionIndex(MessagePackPrimitives_Decoders_ReadUInt64Int64_TypeDefinitionIndex)->GetStaticField(0x9C00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT64__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT64__CCTOR_OFFSET))();
		}

		::MessagePack::MessagePackPrimitives_DecodeResult Read(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::UInt64& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt64&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT64_READ_OFFSET))(this, a1, a2, a3);
		}
	};
}

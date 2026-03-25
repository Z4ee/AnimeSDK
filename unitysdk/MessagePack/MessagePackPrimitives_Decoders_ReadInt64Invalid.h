#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackPrimitives_DecodeResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INVALID_READ_OFFSET UNITYSDK_OFFSET(0x15D6D280)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INVALID__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D6D2A0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INVALID__CTOR_OFFSET UNITYSDK_OFFSET(0x15D6D270)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_Decoders_ReadInt64Invalid_TypeDefinitionIndex = 9031;

	class MessagePackPrimitives_Decoders_ReadInt64Invalid : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackPrimitives_Decoders_ReadInt64Invalid** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackPrimitives_Decoders_ReadInt64Invalid**)Il2CppClass::FromTypeDefinitionIndex(MessagePackPrimitives_Decoders_ReadInt64Invalid_TypeDefinitionIndex)->GetStaticField(0x223D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INVALID__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INVALID__CCTOR_OFFSET))();
		}

		::MessagePack::MessagePackPrimitives_DecodeResult Read(::System::ReadOnlySpan_1<::System::Byte> source, ::System::Int64& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INVALID_READ_OFFSET))(this, source, value, tokenSize);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackPrimitives_DecodeResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INVALID_READ_OFFSET UNITYSDK_OFFSET(0x18177240)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INVALID__CCTOR_OFFSET UNITYSDK_OFFSET(0x18177260)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INVALID__CTOR_OFFSET UNITYSDK_OFFSET(0x18177230)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_Decoders_ReadInt64Invalid_TypeDefinitionIndex = 7131;

	class MessagePackPrimitives_Decoders_ReadInt64Invalid : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackPrimitives_Decoders_ReadInt64Invalid** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackPrimitives_Decoders_ReadInt64Invalid**)Il2CppClass::FromTypeDefinitionIndex(MessagePackPrimitives_Decoders_ReadInt64Invalid_TypeDefinitionIndex)->GetStaticField(0x9AD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INVALID__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INVALID__CCTOR_OFFSET))();
		}

		::MessagePack::MessagePackPrimitives_DecodeResult Read(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::Int64& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INVALID_READ_OFFSET))(this, a1, a2, a3);
		}
	};
}

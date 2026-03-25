#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackPrimitives_DecodeResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64FIXINT_READ_OFFSET UNITYSDK_OFFSET(0x15D6D690)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64FIXINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D6D6D0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64FIXINT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D6D680)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_Decoders_ReadUInt64FixInt_TypeDefinitionIndex = 9043;

	class MessagePackPrimitives_Decoders_ReadUInt64FixInt : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackPrimitives_Decoders_ReadUInt64FixInt** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackPrimitives_Decoders_ReadUInt64FixInt**)Il2CppClass::FromTypeDefinitionIndex(MessagePackPrimitives_Decoders_ReadUInt64FixInt_TypeDefinitionIndex)->GetStaticField(0x22530);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64FIXINT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64FIXINT__CCTOR_OFFSET))();
		}

		::MessagePack::MessagePackPrimitives_DecodeResult Read(::System::ReadOnlySpan_1<::System::Byte> source, ::System::UInt64& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt64&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64FIXINT_READ_OFFSET))(this, source, value, tokenSize);
		}
	};
}

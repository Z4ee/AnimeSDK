#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackPrimitives_DecodeResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64NEGATIVEFIXINT_READ_OFFSET UNITYSDK_OFFSET(0x15D6DB30)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64NEGATIVEFIXINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D6DBB0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64NEGATIVEFIXINT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D6DB20)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_Decoders_ReadUInt64NegativeFixInt_TypeDefinitionIndex = 9044;

	class MessagePackPrimitives_Decoders_ReadUInt64NegativeFixInt : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackPrimitives_Decoders_ReadUInt64NegativeFixInt** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackPrimitives_Decoders_ReadUInt64NegativeFixInt**)Il2CppClass::FromTypeDefinitionIndex(MessagePackPrimitives_Decoders_ReadUInt64NegativeFixInt_TypeDefinitionIndex)->GetStaticField(0x22520);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64NEGATIVEFIXINT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64NEGATIVEFIXINT__CCTOR_OFFSET))();
		}

		::MessagePack::MessagePackPrimitives_DecodeResult Read(::System::ReadOnlySpan_1<::System::Byte> source, ::System::UInt64& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt64&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64NEGATIVEFIXINT_READ_OFFSET))(this, source, value, tokenSize);
		}
	};
}

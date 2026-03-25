#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackPrimitives_DecodeResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INT32_READ_OFFSET UNITYSDK_OFFSET(0x15D6D060)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INT32__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D6D0D0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INT32__CTOR_OFFSET UNITYSDK_OFFSET(0x15D6D050)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_Decoders_ReadInt64Int32_TypeDefinitionIndex = 9040;

	class MessagePackPrimitives_Decoders_ReadInt64Int32 : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackPrimitives_Decoders_ReadInt64Int32** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackPrimitives_Decoders_ReadInt64Int32**)Il2CppClass::FromTypeDefinitionIndex(MessagePackPrimitives_Decoders_ReadInt64Int32_TypeDefinitionIndex)->GetStaticField(0x22440);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INT32__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INT32__CCTOR_OFFSET))();
		}

		::MessagePack::MessagePackPrimitives_DecodeResult Read(::System::ReadOnlySpan_1<::System::Byte> source, ::System::Int64& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INT32_READ_OFFSET))(this, source, value, tokenSize);
		}
	};
}

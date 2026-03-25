#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackPrimitives_DecodeResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT8_READ_OFFSET UNITYSDK_OFFSET(0x15D6D9F0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT8__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D6DA70)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT8__CTOR_OFFSET UNITYSDK_OFFSET(0x15D6D9E0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_Decoders_ReadUInt64Int8_TypeDefinitionIndex = 9049;

	class MessagePackPrimitives_Decoders_ReadUInt64Int8 : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackPrimitives_Decoders_ReadUInt64Int8** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackPrimitives_Decoders_ReadUInt64Int8**)Il2CppClass::FromTypeDefinitionIndex(MessagePackPrimitives_Decoders_ReadUInt64Int8_TypeDefinitionIndex)->GetStaticField(0x224E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT8__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT8__CCTOR_OFFSET))();
		}

		::MessagePack::MessagePackPrimitives_DecodeResult Read(::System::ReadOnlySpan_1<::System::Byte> source, ::System::UInt64& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt64&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT8_READ_OFFSET))(this, source, value, tokenSize);
		}
	};
}

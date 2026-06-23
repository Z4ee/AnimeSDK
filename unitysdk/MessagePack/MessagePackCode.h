#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MESSAGEPACK_MESSAGEPACKCODE_ISSIGNEDINTEGER_OFFSET UNITYSDK_OFFSET(0x1D40C510)
#define MESSAGEPACK_MESSAGEPACKCODE_TOFORMATNAME_OFFSET UNITYSDK_OFFSET(0x1D40C470)
#define MESSAGEPACK_MESSAGEPACKCODE_TOMESSAGEPACKTYPE_OFFSET UNITYSDK_OFFSET(0x1D40C3D0)
#define MESSAGEPACK_MESSAGEPACKCODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D40B260)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackCode_TypeDefinitionIndex = 30436;

	class MessagePackCode : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_FormatNameTable()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackCode_TypeDefinitionIndex)->GetStaticField(0x244F0);
		}
		static ::Il2CppArray<::MessagePack::MessagePackType>** StaticGet_TypeLookupTable()
		{
			return (::Il2CppArray<::MessagePack::MessagePackType>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackCode_TypeDefinitionIndex)->GetStaticField(0x244F8);
		}
		// static const ::System::Byte MinFixInt = 0x0; // 0x0
		// static const ::System::Byte MaxFixInt = 0x7F; // 0x0
		// static const ::System::Byte MinFixMap = 0x80; // 0x0
		// static const ::System::Byte MaxFixMap = 0x8F; // 0x0
		// static const ::System::Byte MinFixArray = 0x90; // 0x0
		// static const ::System::Byte MaxFixArray = 0x9F; // 0x0
		// static const ::System::Byte MinFixStr = 0xA0; // 0x0
		// static const ::System::Byte MaxFixStr = 0xBF; // 0x0
		// static const ::System::Byte Nil = 0xC0; // 0x0
		// static const ::System::Byte NeverUsed = 0xC1; // 0x0
		// static const ::System::Byte False = 0xC2; // 0x0
		// static const ::System::Byte True = 0xC3; // 0x0
		// static const ::System::Byte Bin8 = 0xC4; // 0x0
		// static const ::System::Byte Bin16 = 0xC5; // 0x0
		// static const ::System::Byte Bin32 = 0xC6; // 0x0
		// static const ::System::Byte Ext8 = 0xC7; // 0x0
		// static const ::System::Byte Ext16 = 0xC8; // 0x0
		// static const ::System::Byte Ext32 = 0xC9; // 0x0
		// static const ::System::Byte Float32 = 0xCA; // 0x0
		// static const ::System::Byte Float64 = 0xCB; // 0x0
		// static const ::System::Byte UInt8 = 0xCC; // 0x0
		// static const ::System::Byte UInt16 = 0xCD; // 0x0
		// static const ::System::Byte UInt32 = 0xCE; // 0x0
		// static const ::System::Byte UInt64 = 0xCF; // 0x0
		// static const ::System::Byte Int8 = 0xD0; // 0x0
		// static const ::System::Byte Int16 = 0xD1; // 0x0
		// static const ::System::Byte Int32 = 0xD2; // 0x0
		// static const ::System::Byte Int64 = 0xD3; // 0x0
		// static const ::System::Byte FixExt1 = 0xD4; // 0x0
		// static const ::System::Byte FixExt2 = 0xD5; // 0x0
		// static const ::System::Byte FixExt4 = 0xD6; // 0x0
		// static const ::System::Byte FixExt8 = 0xD7; // 0x0
		// static const ::System::Byte FixExt16 = 0xD8; // 0x0
		// static const ::System::Byte Str8 = 0xD9; // 0x0
		// static const ::System::Byte Str16 = 0xDA; // 0x0
		// static const ::System::Byte Str32 = 0xDB; // 0x0
		// static const ::System::Byte Array16 = 0xDC; // 0x0
		// static const ::System::Byte Array32 = 0xDD; // 0x0
		// static const ::System::Byte Map16 = 0xDE; // 0x0
		// static const ::System::Byte Map32 = 0xDF; // 0x0
		// static const ::System::Byte MinNegativeFixInt = 0xE0; // 0x0
		// static const ::System::Byte MaxNegativeFixInt = 0xFF; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE__CCTOR_OFFSET))();
		}

		static ::MessagePack::MessagePackType ToMessagePackType(::System::Byte code)
		{
			return ((::MessagePack::MessagePackType(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_TOMESSAGEPACKTYPE_OFFSET))(code);
		}

		static ::System::String* ToFormatName(::System::Byte code)
		{
			return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_TOFORMATNAME_OFFSET))(code);
		}

		static ::System::Boolean IsSignedInteger(::System::Byte code)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISSIGNEDINTEGER_OFFSET))(code);
		}
	};
}

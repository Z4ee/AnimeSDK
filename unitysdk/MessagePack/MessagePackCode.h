#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MESSAGEPACK_MESSAGEPACKCODE_CHECKBITMASK_OFFSET UNITYSDK_OFFSET(0x15D673B0)
#define MESSAGEPACK_MESSAGEPACKCODE_ISFIXARRAY_OFFSET UNITYSDK_OFFSET(0x15D673C0)
#define MESSAGEPACK_MESSAGEPACKCODE_ISFIXMAP_OFFSET UNITYSDK_OFFSET(0x15D67350)
#define MESSAGEPACK_MESSAGEPACKCODE_ISFIXSTR_OFFSET UNITYSDK_OFFSET(0x15D67420)
#define MESSAGEPACK_MESSAGEPACKCODE_ISNEGATIVEFIXINT_OFFSET UNITYSDK_OFFSET(0x15D3AE50)
#define MESSAGEPACK_MESSAGEPACKCODE_ISPOSITIVEFIXINT_OFFSET UNITYSDK_OFFSET(0x15D3AE40)
#define MESSAGEPACK_MESSAGEPACKCODE_TOFORMATNAME_OFFSET UNITYSDK_OFFSET(0x15D2BE10)
#define MESSAGEPACK_MESSAGEPACKCODE_TOMESSAGEPACKTYPE_OFFSET UNITYSDK_OFFSET(0x15D672B0)
#define MESSAGEPACK_MESSAGEPACKCODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D66140)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackCode_TypeDefinitionIndex = 9020;

	class MessagePackCode : public ::System::Object
	{
	public:
		static ::Il2CppArray<::MessagePack::MessagePackType>** StaticGet_TypeLookupTable()
		{
			return (::Il2CppArray<::MessagePack::MessagePackType>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackCode_TypeDefinitionIndex)->GetStaticField(0x22290);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_FormatNameTable()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackCode_TypeDefinitionIndex)->GetStaticField(0x22298);
		}

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

		static ::System::Boolean IsPositiveFixInt(::System::Byte code)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISPOSITIVEFIXINT_OFFSET))(code);
		}

		static ::System::Boolean IsNegativeFixInt(::System::Byte code)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISNEGATIVEFIXINT_OFFSET))(code);
		}

		static ::System::Boolean IsFixMap(::System::Byte code)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISFIXMAP_OFFSET))(code);
		}

		static ::System::Boolean IsFixArray(::System::Byte code)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISFIXARRAY_OFFSET))(code);
		}

		static ::System::Boolean IsFixStr(::System::Byte code)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISFIXSTR_OFFSET))(code);
		}

		static ::System::Boolean CheckBitmask(::System::Byte code, ::System::Byte bitmask, ::System::Byte targetValue)
		{
			return ((::System::Boolean(*)(::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_CHECKBITMASK_OFFSET))(code, bitmask, targetValue);
		}
	};
}

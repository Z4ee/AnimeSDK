#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MESSAGEPACK_MESSAGEPACKCODE_CHECKBITMASK_OFFSET UNITYSDK_OFFSET(0x181716E0)
#define MESSAGEPACK_MESSAGEPACKCODE_ISFIXARRAY_OFFSET UNITYSDK_OFFSET(0x181716F0)
#define MESSAGEPACK_MESSAGEPACKCODE_ISFIXMAP_OFFSET UNITYSDK_OFFSET(0x18171680)
#define MESSAGEPACK_MESSAGEPACKCODE_ISFIXSTR_OFFSET UNITYSDK_OFFSET(0x18171750)
#define MESSAGEPACK_MESSAGEPACKCODE_ISNEGATIVEFIXINT_OFFSET UNITYSDK_OFFSET(0x18146DD0)
#define MESSAGEPACK_MESSAGEPACKCODE_ISPOSITIVEFIXINT_OFFSET UNITYSDK_OFFSET(0x18146DC0)
#define MESSAGEPACK_MESSAGEPACKCODE_TOFORMATNAME_OFFSET UNITYSDK_OFFSET(0x18138100)
#define MESSAGEPACK_MESSAGEPACKCODE_TOMESSAGEPACKTYPE_OFFSET UNITYSDK_OFFSET(0x181715F0)
#define MESSAGEPACK_MESSAGEPACKCODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x181708F0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackCode_TypeDefinitionIndex = 7120;

	class MessagePackCode : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_FormatNameTable()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackCode_TypeDefinitionIndex)->GetStaticField(0x9AA0);
		}
		static ::Il2CppArray<::MessagePack::MessagePackType>** StaticGet_TypeLookupTable()
		{
			return (::Il2CppArray<::MessagePack::MessagePackType>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackCode_TypeDefinitionIndex)->GetStaticField(0x9AA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE__CCTOR_OFFSET))();
		}

		static ::MessagePack::MessagePackType ToMessagePackType(::System::Byte a1)
		{
			return ((::MessagePack::MessagePackType(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_TOMESSAGEPACKTYPE_OFFSET))(a1);
		}

		static ::System::String* ToFormatName(::System::Byte a1)
		{
			return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_TOFORMATNAME_OFFSET))(a1);
		}

		static ::System::Boolean IsPositiveFixInt(::System::Byte a1)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISPOSITIVEFIXINT_OFFSET))(a1);
		}

		static ::System::Boolean IsNegativeFixInt(::System::Byte a1)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISNEGATIVEFIXINT_OFFSET))(a1);
		}

		static ::System::Boolean IsFixMap(::System::Byte a1)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISFIXMAP_OFFSET))(a1);
		}

		static ::System::Boolean IsFixArray(::System::Byte a1)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISFIXARRAY_OFFSET))(a1);
		}

		static ::System::Boolean IsFixStr(::System::Byte a1)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_ISFIXSTR_OFFSET))(a1);
		}

		static ::System::Boolean CheckBitmask(::System::Byte a1, ::System::Byte a2, ::System::Byte a3)
		{
			return ((::System::Boolean(*)(::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCODE_CHECKBITMASK_OFFSET))(a1, a2, a3);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }

#define MESSAGEPACK_KEYATTRIBUTE_GET_INTKEY_OFFSET UNITYSDK_OFFSET(0x1B662480)
#define MESSAGEPACK_KEYATTRIBUTE_GET_STRINGKEY_OFFSET UNITYSDK_OFFSET(0x1B662490)
#define MESSAGEPACK_KEYATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B6624C0)
#define MESSAGEPACK_KEYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6624A0)

namespace MessagePack
{
	inline static constexpr unsigned int KeyAttribute_TypeDefinitionIndex = 6158;

	class KeyAttribute : public ::System::Attribute
	{
	public:
		::System::String* _StringKey_k__BackingField; // 0x10
		::System::Nullable_1<::System::Int32> _IntKey_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_KEYATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_KEYATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> get_IntKey()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_KEYATTRIBUTE_GET_INTKEY_OFFSET))(this);
		}

		::System::String* get_StringKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_KEYATTRIBUTE_GET_STRINGKEY_OFFSET))(this);
		}
	};
}

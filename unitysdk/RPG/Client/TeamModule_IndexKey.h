#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_TEAMMODULE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x397EF10)
#define RPG_CLIENT_TEAMMODULE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x397EF70)
#define RPG_CLIENT_TEAMMODULE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x397EF00)
#define RPG_CLIENT_TEAMMODULE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x6E5720)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamModule_IndexKey_TypeDefinitionIndex = 65116;

	struct alignas(4) TeamModule_IndexKey
	{
		::Enum_3_01618AD0437C8486 AvatarType; // 0x10
		::System::UInt32 ID; // 0x14

		::System::Void _ctor(::Enum_3_01618AD0437C8486 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_INDEXKEY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TeamModule_IndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamModule_IndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_INDEXKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}

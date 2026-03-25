#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_TEAMMODULE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x84AB0)
#define RPG_CLIENT_TEAMMODULE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x84B10)
#define RPG_CLIENT_TEAMMODULE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x84AA0)
#define RPG_CLIENT_TEAMMODULE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x72EF0)
#define RPG_CLIENT_TEAMMODULE_INDEXKEY___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x84BE0)
#define RPG_CLIENT_TEAMMODULE_INDEXKEY___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x84B60)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamModule_IndexKey_TypeDefinitionIndex = 55616;

	struct alignas(4) TeamModule_IndexKey
	{
		::Enum_3_A35B38E5F9115A76 AvatarType; // 0x10
		::System::UInt32 ID; // 0x14

		::System::Void _ctor(::Enum_3_A35B38E5F9115A76 avatarType, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_INDEXKEY__CTOR_OFFSET))(this, avatarType, id);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TeamModule_IndexKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamModule_IndexKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_INDEXKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_INDEXKEY___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_INDEXKEY___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CONFLICT_NORMALGROUPNPCINDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x85CD0)
#define CONFLICT_NORMALGROUPNPCINDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x85D40)
#define CONFLICT_NORMALGROUPNPCINDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x7B070)
#define CONFLICT_NORMALGROUPNPCINDEXKEY___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x85DA0)

inline static constexpr unsigned int Conflict_NormalGroupNPCIndexKey_TypeDefinitionIndex = 38067;

struct alignas(4) Conflict_NormalGroupNPCIndexKey
{
	::System::UInt32 GroupID; // 0x10
	::System::UInt32 InstanceID; // 0x14
	::System::UInt32 ConflictID; // 0x18

	::System::Void _ctor(::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 conflictID)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_NORMALGROUPNPCINDEXKEY__CTOR_OFFSET))(this, groupID, instanceID, conflictID);
	}

	::System::Boolean Equals(::Conflict_NormalGroupNPCIndexKey other)
	{
		return ((::System::Boolean(*)(::PVOID, ::Conflict_NormalGroupNPCIndexKey))((::PBYTE)hIl2Cpp + CONFLICT_NORMALGROUPNPCINDEXKEY_EQUALS_OFFSET))(this, other);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_NORMALGROUPNPCINDEXKEY_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_NORMALGROUPNPCINDEXKEY___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};

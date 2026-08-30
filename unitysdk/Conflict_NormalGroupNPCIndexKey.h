#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CONFLICT_NORMALGROUPNPCINDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3ADFC90)
#define CONFLICT_NORMALGROUPNPCINDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3ADFD00)
#define CONFLICT_NORMALGROUPNPCINDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0)

inline static constexpr unsigned int Conflict_NormalGroupNPCIndexKey_TypeDefinitionIndex = 47612;

struct alignas(4) Conflict_NormalGroupNPCIndexKey
{
	::System::UInt32 GroupID; // 0x10
	::System::UInt32 InstanceID; // 0x14
	::System::UInt32 ConflictID; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_NORMALGROUPNPCINDEXKEY__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Equals(::Conflict_NormalGroupNPCIndexKey a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Conflict_NormalGroupNPCIndexKey))((::PBYTE)hIl2Cpp + CONFLICT_NORMALGROUPNPCINDEXKEY_EQUALS_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_NORMALGROUPNPCINDEXKEY_TOSTRING_OFFSET))(this);
	}
};

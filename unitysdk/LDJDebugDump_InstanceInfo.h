#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int LDJDebugDump_InstanceInfo_TypeDefinitionIndex = 45799;

struct alignas(8) LDJDebugDump_InstanceInfo
{
	::System::String* meshName; // 0x10
	::Il2CppArray<::System::Single>* position; // 0x18
	::Il2CppArray<::System::Single>* rotation; // 0x20
	::Il2CppArray<::System::Single>* scale; // 0x28
};

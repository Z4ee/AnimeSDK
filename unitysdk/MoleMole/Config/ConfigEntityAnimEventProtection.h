#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAnimEventProtection_TypeDefinitionIndex = 44472;

	struct alignas(8) ConfigEntityAnimEventProtection
	{
		::System::Int32 MaxCount; // 0x10
		::System::Single ProtectTime; // 0x14
		::Il2CppArray<::System::String*>* AnimEvents; // 0x18
	};
}

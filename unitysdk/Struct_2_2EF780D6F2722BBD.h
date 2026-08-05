#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }

#define STRUCT_2_2EF780D6F2722BBD_METHOD_2_0A6AB4FCF09A7000_OFFSET UNITYSDK_OFFSET(0x757420)
#define STRUCT_2_2EF780D6F2722BBD_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x757440)
#define STRUCT_2_2EF780D6F2722BBD_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x757430)

inline static constexpr unsigned int Struct_2_2EF780D6F2722BBD_TypeDefinitionIndex = 58387;

struct alignas(8) Struct_2_2EF780D6F2722BBD
{
	::MoleMole::EntityHandle Field_2_2; // 0x10
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_0; // 0x24

	::System::Void Method_2_0A6AB4FCF09A7000(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_2EF780D6F2722BBD_METHOD_2_0A6AB4FCF09A7000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2EF780D6F2722BBD_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2EF780D6F2722BBD_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};

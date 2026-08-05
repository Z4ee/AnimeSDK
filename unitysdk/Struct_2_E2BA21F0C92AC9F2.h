#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }

#define STRUCT_2_E2BA21F0C92AC9F2_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x5E8510)
#define STRUCT_2_E2BA21F0C92AC9F2__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

inline static constexpr unsigned int Struct_2_E2BA21F0C92AC9F2_TypeDefinitionIndex = 67800;

struct alignas(8) Struct_2_E2BA21F0C92AC9F2
{
	::MoleMole::Battle::Entity* Field_2_0; // 0x10

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_E2BA21F0C92AC9F2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E2BA21F0C92AC9F2_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}
};

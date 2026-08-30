#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EFreeStyleControlMode.h"
#include "unitysdk/System/ValueType.h"

class Class_1_C3183153408A386B;

#define STRUCT_2_127EAB4936C75FCC__CTOR_OFFSET UNITYSDK_OFFSET(0x31FA0)

inline static constexpr unsigned int Struct_2_127EAB4936C75FCC_TypeDefinitionIndex = 57425;

struct alignas(8) Struct_2_127EAB4936C75FCC
{
	::RPG::GameCore::EFreeStyleControlMode FCGFFAJIBKA; // 0x10
	::Class_1_C3183153408A386B* CIKPBGDIABO; // 0x18

	::System::Void _ctor(::RPG::GameCore::EFreeStyleControlMode a1, ::Class_1_C3183153408A386B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EFreeStyleControlMode, ::Class_1_C3183153408A386B*))((::PBYTE)hIl2Cpp + STRUCT_2_127EAB4936C75FCC__CTOR_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class EcsFilter; }

#define STRUCT_2_186797E34BDAB9E2__CTOR_OFFSET UNITYSDK_OFFSET(0x33DF30)

inline static constexpr unsigned int Struct_2_186797E34BDAB9E2_TypeDefinitionIndex = 56416;

struct alignas(8) Struct_2_186797E34BDAB9E2
{
	::Nap::NapECS::EcsFilter* Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x18

	::System::Void _ctor(::Nap::NapECS::EcsFilter* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_186797E34BDAB9E2__CTOR_OFFSET))(this, a1, a2);
	}
};

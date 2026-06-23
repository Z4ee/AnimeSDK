#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EB96CB9A278BD6E0.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }

#define STRUCT_2_57C422EDEAAA7766__CTOR_OFFSET UNITYSDK_OFFSET(0x680BB0)

inline static constexpr unsigned int Struct_2_57C422EDEAAA7766_TypeDefinitionIndex = 81877;

struct alignas(8) Struct_2_57C422EDEAAA7766
{
	::MoleMole::Battle::Entity* Field_2_0; // 0x10
	::Enum_3_EB96CB9A278BD6E0 Field_2_1; // 0x18
	::MoleMole::Battle::Entity* Field_2_2; // 0x20

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::Enum_3_EB96CB9A278BD6E0 a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Enum_3_EB96CB9A278BD6E0, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_57C422EDEAAA7766__CTOR_OFFSET))(this, a1, a2, a3);
	}
};

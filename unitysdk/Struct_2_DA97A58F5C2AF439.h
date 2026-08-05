#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_DA97A58F5C2AF439__CTOR_OFFSET UNITYSDK_OFFSET(0x7C7E20)

inline static constexpr unsigned int Struct_2_DA97A58F5C2AF439_TypeDefinitionIndex = 60281;

struct alignas(8) Struct_2_DA97A58F5C2AF439
{
	::System::Single Field_2_1; // 0x10
	::MoleMole::EntityHandle Field_2_0; // 0x18

	::System::Void _ctor(::System::Single& a1, ::MoleMole::EntityHandle& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + STRUCT_2_DA97A58F5C2AF439__CTOR_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_029003AFE5A42E47__CTOR_OFFSET UNITYSDK_OFFSET(0x5EE4E0)

inline static constexpr unsigned int Struct_2_029003AFE5A42E47_TypeDefinitionIndex = 67085;

struct alignas(4) Struct_2_029003AFE5A42E47
{
	::Enum_3_7FA27888FA17A22A Field_2_2; // 0x10
	::Enum_3_7FA27888FA17A22A Field_2_1; // 0x14
	::MoleMole::LogicButtonInputType Field_2_0; // 0x18
	::System::Int32 Field_2_7; // 0x1C
	::System::Int32 Field_2_6; // 0x20
	::Enum_3_A019F766F8C74696 Field_2_5; // 0x24

	::System::Void _ctor(::Enum_3_7FA27888FA17A22A a1, ::Enum_3_7FA27888FA17A22A a2, ::MoleMole::LogicButtonInputType a3, ::System::Int32 a4, ::System::Int32 a5, ::Enum_3_A019F766F8C74696 a6)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7FA27888FA17A22A, ::Enum_3_7FA27888FA17A22A, ::MoleMole::LogicButtonInputType, ::System::Int32, ::System::Int32, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + STRUCT_2_029003AFE5A42E47__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};

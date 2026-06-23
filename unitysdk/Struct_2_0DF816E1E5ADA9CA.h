#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ButtonPressType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_0DF816E1E5ADA9CA__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB920)

inline static constexpr unsigned int Struct_2_0DF816E1E5ADA9CA_TypeDefinitionIndex = 73856;

struct alignas(4) Struct_2_0DF816E1E5ADA9CA
{
	::MoleMole::InputLogicEventType Field_2_0; // 0x10
	::MoleMole::ButtonPressType Field_2_1; // 0x14

	::System::Void _ctor(::MoleMole::InputLogicEventType a1, ::MoleMole::ButtonPressType a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType, ::MoleMole::ButtonPressType))((::PBYTE)hIl2Cpp + STRUCT_2_0DF816E1E5ADA9CA__CTOR_OFFSET))(this, a1, a2);
	}
};

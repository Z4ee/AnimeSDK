#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C0D064AD753299B0.h"
#include "unitysdk/MoleMole/Arcade/CoreBase/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_1_04057F2C2F6EB8E0_STRUCT_2_F80D45BF1D56A38F__CTOR_OFFSET UNITYSDK_OFFSET(0x9F6550)

inline static constexpr unsigned int Class_1_04057F2C2F6EB8E0_Struct_2_F80D45BF1D56A38F_TypeDefinitionIndex = 29080;

struct alignas(8) Class_1_04057F2C2F6EB8E0_Struct_2_F80D45BF1D56A38F
{
	::Enum_3_C0D064AD753299B0 Field_2_0; // 0x10
	::MoleMole::Arcade::CoreBase::ComponentMask Field_2_1; // 0x18

	::System::Void _ctor(::Enum_3_C0D064AD753299B0 a1, ::MoleMole::Arcade::CoreBase::ComponentMask& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_C0D064AD753299B0, ::MoleMole::Arcade::CoreBase::ComponentMask&))((::PBYTE)hIl2Cpp + CLASS_1_04057F2C2F6EB8E0_STRUCT_2_F80D45BF1D56A38F__CTOR_OFFSET))(this, a1, a2);
	}
};

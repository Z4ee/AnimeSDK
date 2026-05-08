#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define CLASS_1_EF32BCC5C168925E_STRUCT_2_52459899DB7358B9__CTOR_OFFSET UNITYSDK_OFFSET(0x3818B0)

inline static constexpr unsigned int Class_1_EF32BCC5C168925E_Struct_2_52459899DB7358B9_TypeDefinitionIndex = 57197;

struct alignas(8) Class_1_EF32BCC5C168925E_Struct_2_52459899DB7358B9
{
	::System::Action* Field_2_0; // 0x10
	::System::Action* Field_2_1; // 0x18
	::System::Action* Field_2_2; // 0x20

	::System::Void _ctor(::System::Action* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_STRUCT_2_52459899DB7358B9__CTOR_OFFSET))(this, a1, a2, a3);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AttackType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_3_0D4C1A014C7CC9DE_STRUCT_2_9B4D04E6A7FE929A_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x7920E0)

inline static constexpr unsigned int Class_3_0D4C1A014C7CC9DE_Struct_2_9B4D04E6A7FE929A_TypeDefinitionIndex = 67157;

struct alignas(8) Class_3_0D4C1A014C7CC9DE_Struct_2_9B4D04E6A7FE929A
{
	::MoleMole::AttackType Field_2_0; // 0x10
	::MoleMole::AttackType Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x19
	::System::Int32 Field_2_4; // 0x1C
	::System::Boolean Field_2_5; // 0x20
	::Il2CppArray<::System::String*>* Field_2_6; // 0x28
	::System::Boolean Field_2_7; // 0x30

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D4C1A014C7CC9DE_STRUCT_2_9B4D04E6A7FE929A_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}
};

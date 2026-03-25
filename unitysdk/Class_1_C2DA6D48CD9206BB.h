#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ElfBuff; }

#define CLASS_1_C2DA6D48CD9206BB__CTOR_OFFSET UNITYSDK_OFFSET(0x168FAE00)

inline static constexpr unsigned int Class_1_C2DA6D48CD9206BB_TypeDefinitionIndex = 33656;

class Class_1_C2DA6D48CD9206BB : public ::System::Object
{
public:
	::RPG::GameCore::ElfBuff* Field_1_1; // 0x10
	::Il2CppArray<::System::Single>* Field_1_2; // 0x18
	::System::Single Field_1_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::ElfBuff* a1, ::Il2CppArray<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElfBuff*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_C2DA6D48CD9206BB__CTOR_OFFSET))(this, a1, a2);
	}
};

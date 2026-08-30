#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ElfBuff; }

#define CLASS_1_C2DA6D48CD9206BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0569A0)

inline static constexpr unsigned int Class_1_C2DA6D48CD9206BB_TypeDefinitionIndex = 42003;

class Class_1_C2DA6D48CD9206BB : public ::System::Object
{
public:
	::RPG::GameCore::ElfBuff* HABJHGPFGEB; // 0x10
	::Il2CppArray<::System::Single>* NPHFIJAFHLB; // 0x18
	::System::Single GAFENHHEBPG; // 0x20

	::System::Void _ctor(::RPG::GameCore::ElfBuff* a1, ::Il2CppArray<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElfBuff*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_C2DA6D48CD9206BB__CTOR_OFFSET))(this, a1, a2);
	}
};

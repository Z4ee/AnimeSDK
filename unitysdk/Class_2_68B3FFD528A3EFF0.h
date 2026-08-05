#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4E8656EE8749AFB7.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_762745BB6079D620.h"

#define CLASS_2_68B3FFD528A3EFF0_METHOD_2_D0633581C8506D66_OFFSET UNITYSDK_OFFSET(0x15445510)
#define CLASS_2_68B3FFD528A3EFF0__CTOR_OFFSET UNITYSDK_OFFSET(0x154454B0)

inline static constexpr unsigned int Class_2_68B3FFD528A3EFF0_TypeDefinitionIndex = 64404;

class Class_2_68B3FFD528A3EFF0 : public ::Class_1_4E8656EE8749AFB7
{
public:
	::Struct_2_762745BB6079D620 Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68B3FFD528A3EFF0__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_2_D0633581C8506D66()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68B3FFD528A3EFF0_METHOD_2_D0633581C8506D66_OFFSET))(this);
	}
};

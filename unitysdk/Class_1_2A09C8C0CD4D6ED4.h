#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1003E4A6E5149B9E.h"
#include "unitysdk/Enum_3_63B88169304F33FD.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2A09C8C0CD4D6ED4__CTOR_OFFSET UNITYSDK_OFFSET(0x100BDFE0)

inline static constexpr unsigned int Class_1_2A09C8C0CD4D6ED4_TypeDefinitionIndex = 40189;

class Class_1_2A09C8C0CD4D6ED4 : public ::System::Object
{
public:
	::Enum_3_63B88169304F33FD Field_1_1; // 0x10
	::System::Single Field_1_4; // 0x14
	::System::Int32 Field_1_3; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::Enum_3_1003E4A6E5149B9E Field_1_0; // 0x20
	::System::Single Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A09C8C0CD4D6ED4__CTOR_OFFSET))(this);
	}
};

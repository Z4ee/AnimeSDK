#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DEF26C653AFADFD;

#define CLASS_1_A82078DEE46B3406__CTOR_OFFSET UNITYSDK_OFFSET(0x17582CE0)

inline static constexpr unsigned int Class_1_A82078DEE46B3406_TypeDefinitionIndex = 40502;

class Class_1_A82078DEE46B3406 : public ::System::Object
{
public:
	::Class_1_3DEF26C653AFADFD* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::Single Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A82078DEE46B3406__CTOR_OFFSET))(this);
	}
};

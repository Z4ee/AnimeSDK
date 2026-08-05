#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7141F52C32C1D31C;
class Class_3_36FF8167703D4259_5;

#define CLASS_1_1B26407BD81502D9_METHOD_1_27EEF2365AEB96A1_OFFSET UNITYSDK_OFFSET(0x16E07A50)
#define CLASS_1_1B26407BD81502D9__CTOR_OFFSET UNITYSDK_OFFSET(0x16E07A40)

inline static constexpr unsigned int Class_1_1B26407BD81502D9_TypeDefinitionIndex = 80578;

class Class_1_1B26407BD81502D9 : public ::System::Object
{
public:
	::Class_1_7141F52C32C1D31C* Field_1_6; // 0x10
	::System::Boolean Field_1_5; // 0x18
	::System::UInt32 Field_1_1; // 0x1C
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B26407BD81502D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_27EEF2365AEB96A1(::Class_3_36FF8167703D4259_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_36FF8167703D4259_5*))((::PBYTE)hIl2Cpp + CLASS_1_1B26407BD81502D9_METHOD_1_27EEF2365AEB96A1_OFFSET))(this, a1);
	}
};

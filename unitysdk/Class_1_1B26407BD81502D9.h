#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7141F52C32C1D31C;
class Class_3_CE3642B3ECB61D27_21;

#define CLASS_1_1B26407BD81502D9_METHOD_1_27EEF2365AEB96A1_OFFSET UNITYSDK_OFFSET(0x13791DD0)
#define CLASS_1_1B26407BD81502D9__CTOR_OFFSET UNITYSDK_OFFSET(0x13791DC0)

inline static constexpr unsigned int Class_1_1B26407BD81502D9_TypeDefinitionIndex = 51751;

class Class_1_1B26407BD81502D9 : public ::System::Object
{
public:
	::Class_1_7141F52C32C1D31C* Field_1_3; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_0; // 0x1C
	::System::UInt32 Field_1_1; // 0x20
	::System::Boolean Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B26407BD81502D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_27EEF2365AEB96A1(::Class_3_CE3642B3ECB61D27_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CE3642B3ECB61D27_21*))((::PBYTE)hIl2Cpp + CLASS_1_1B26407BD81502D9_METHOD_1_27EEF2365AEB96A1_OFFSET))(this, a1);
	}
};

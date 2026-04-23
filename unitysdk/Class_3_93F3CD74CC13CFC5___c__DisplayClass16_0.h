#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_1_8C3AC9786B6764EF;
class Class_3_93F3CD74CC13CFC5;

#define CLASS_3_93F3CD74CC13CFC5___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB499320)
#define CLASS_3_93F3CD74CC13CFC5___C__DISPLAYCLASS16_0___STARTUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xB499EE0)
#define CLASS_3_93F3CD74CC13CFC5___C__DISPLAYCLASS16_0___STARTUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0xB499F00)

inline static constexpr unsigned int Class_3_93F3CD74CC13CFC5___c__DisplayClass16_0_TypeDefinitionIndex = 56394;

class Class_3_93F3CD74CC13CFC5___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_1_8C3AC9786B6764EF* queue; // 0x10
	::Class_3_93F3CD74CC13CFC5* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_93F3CD74CC13CFC5___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void __StartUpdate_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_93F3CD74CC13CFC5___C__DISPLAYCLASS16_0___STARTUPDATE_B__0_OFFSET))(this);
	}

	::System::Void __StartUpdate_b__1(::Class_0_16E4307DCC419505_557* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_3_93F3CD74CC13CFC5___C__DISPLAYCLASS16_0___STARTUPDATE_B__1_OFFSET))(this, prog);
	}
};

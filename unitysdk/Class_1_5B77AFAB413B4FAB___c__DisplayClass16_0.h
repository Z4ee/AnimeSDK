#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_107;
class Class_0_16E4307DCC419505_163;
class Class_1_5B77AFAB413B4FAB;
class Class_1_7B5BC5F7531D3B01;

#define CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C515B30)
#define CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS16_0___CREATEPROGRESS_B__0_OFFSET UNITYSDK_OFFSET(0x1C517240)

inline static constexpr unsigned int Class_1_5B77AFAB413B4FAB___c__DisplayClass16_0_TypeDefinitionIndex = 41819;

class Class_1_5B77AFAB413B4FAB___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_1_5B77AFAB413B4FAB* __4__this; // 0x10
	::Class_0_16E4307DCC419505_163* board; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::Class_1_7B5BC5F7531D3B01* __CreateProgress_b__0(::Class_0_16E4307DCC419505_107* a1)
	{
		return ((::Class_1_7B5BC5F7531D3B01*(*)(::PVOID, ::Class_0_16E4307DCC419505_107*))((::PBYTE)hIl2Cpp + CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS16_0___CREATEPROGRESS_B__0_OFFSET))(this, a1);
	}
};

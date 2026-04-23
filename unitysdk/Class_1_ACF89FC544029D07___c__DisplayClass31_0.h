#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9AAC3BB4FD7CE6FE;
class Class_1_ACF89FC544029D07;

#define CLASS_1_ACF89FC544029D07___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12AAD9B0)
#define CLASS_1_ACF89FC544029D07___C__DISPLAYCLASS31_0__REGISTERPEDESTRIAN_B__0_OFFSET UNITYSDK_OFFSET(0x12AADDC0)

inline static constexpr unsigned int Class_1_ACF89FC544029D07___c__DisplayClass31_0_TypeDefinitionIndex = 63896;

class Class_1_ACF89FC544029D07___c__DisplayClass31_0 : public ::System::Object
{
public:
	::Class_1_ACF89FC544029D07* __4__this; // 0x10
	::Class_1_9AAC3BB4FD7CE6FE* pedestrian; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
	}

	::System::Int32 _RegisterPedestrian_b__0(::System::Int32 a, ::System::Int32 b)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07___C__DISPLAYCLASS31_0__REGISTERPEDESTRIAN_B__0_OFFSET))(this, a, b);
	}
};

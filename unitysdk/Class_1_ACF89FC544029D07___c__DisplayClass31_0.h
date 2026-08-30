#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ACF89FC544029D07;
class Class_1_B87B48EBDCE76E87;

#define CLASS_1_ACF89FC544029D07___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF453F0)
#define CLASS_1_ACF89FC544029D07___C__DISPLAYCLASS31_0__REGISTERPEDESTRIAN_B__0_OFFSET UNITYSDK_OFFSET(0x1AF45800)

inline static constexpr unsigned int Class_1_ACF89FC544029D07___c__DisplayClass31_0_TypeDefinitionIndex = 69278;

class Class_1_ACF89FC544029D07___c__DisplayClass31_0 : public ::System::Object
{
public:
	::Class_1_B87B48EBDCE76E87* pedestrian; // 0x10
	::Class_1_ACF89FC544029D07* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
	}

	::System::Int32 _RegisterPedestrian_b__0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07___C__DISPLAYCLASS31_0__REGISTERPEDESTRIAN_B__0_OFFSET))(this, a1, a2);
	}
};

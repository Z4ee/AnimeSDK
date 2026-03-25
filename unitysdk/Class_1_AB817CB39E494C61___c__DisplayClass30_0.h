#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C40FF0290B5423C;

#define CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x113BB630)
#define CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS30_0___SUBTRACTFROM_B__0_OFFSET UNITYSDK_OFFSET(0x113BF950)

inline static constexpr unsigned int Class_1_AB817CB39E494C61___c__DisplayClass30_0_TypeDefinitionIndex = 58335;

class Class_1_AB817CB39E494C61___c__DisplayClass30_0 : public ::System::Object
{
public:
	::Class_1_0C40FF0290B5423C* config; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __SubtractFrom_b__0(::Class_1_0C40FF0290B5423C* c)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0C40FF0290B5423C*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS30_0___SUBTRACTFROM_B__0_OFFSET))(this, c);
	}
};

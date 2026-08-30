#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5452947417BCF16A;

#define CLASS_1_E66A76128908BBEC___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16930C80)
#define CLASS_1_E66A76128908BBEC___C__DISPLAYCLASS30_0__GETAGENDA_B__0_OFFSET UNITYSDK_OFFSET(0x16931F10)

inline static constexpr unsigned int Class_1_E66A76128908BBEC___c__DisplayClass30_0_TypeDefinitionIndex = 80383;

class Class_1_E66A76128908BBEC___c__DisplayClass30_0 : public ::System::Object
{
public:
	::System::UInt32 day; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E66A76128908BBEC___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetAgenda_b__0(::Class_1_5452947417BCF16A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5452947417BCF16A*))((::PBYTE)hIl2Cpp + CLASS_1_E66A76128908BBEC___C__DISPLAYCLASS30_0__GETAGENDA_B__0_OFFSET))(this, a1);
	}
};

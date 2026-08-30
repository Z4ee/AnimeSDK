#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DDDB57AA67C3A9EA;

#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS83_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105E90D0)
#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS83_0___PRUNEITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x105E9B30)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c__DisplayClass83_0_TypeDefinitionIndex = 71285;

class Class_2_7EB6B93CD50E2F99___c__DisplayClass83_0 : public ::System::Object
{
public:
	::Class_1_DDDB57AA67C3A9EA* item; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS83_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __PruneItems_b__0(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS83_0___PRUNEITEMS_B__0_OFFSET))(this, a1);
	}
};

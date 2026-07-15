#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DDDB57AA67C3A9EA;

#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE501740)
#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS73_0___PRUNEITEMS_B__0_OFFSET UNITYSDK_OFFSET(0xE5021A0)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c__DisplayClass73_0_TypeDefinitionIndex = 68109;

class Class_2_7EB6B93CD50E2F99___c__DisplayClass73_0 : public ::System::Object
{
public:
	::Class_1_DDDB57AA67C3A9EA* item; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __PruneItems_b__0(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS73_0___PRUNEITEMS_B__0_OFFSET))(this, a1);
	}
};

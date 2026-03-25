#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02D30900317D93FD;

#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11830FE0)
#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS69_0___PRUNEITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x11831D40)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c__DisplayClass69_0_TypeDefinitionIndex = 58444;

class Class_2_7EB6B93CD50E2F99___c__DisplayClass69_0 : public ::System::Object
{
public:
	::Class_1_02D30900317D93FD* item; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __PruneItems_b__0(::Class_1_02D30900317D93FD* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS69_0___PRUNEITEMS_B__0_OFFSET))(this, x);
	}
};

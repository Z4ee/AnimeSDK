#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_09B45CBFDAC5DA07.h"
#include "unitysdk/System/Object.h"

class Class_2_0C58AD91B0F4D809;

#define CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS47_0__CREATECAMERATRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x956B390)
#define CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS47_0__CREATECAMERATRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x956B410)
#define CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x955CEA0)

inline static constexpr unsigned int Class_3_D6E9A038FA23103A___c__DisplayClass47_0_TypeDefinitionIndex = 70445;

class Class_3_D6E9A038FA23103A___c__DisplayClass47_0 : public ::System::Object
{
public:
	::Struct_2_09B45CBFDAC5DA07 callback; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateCameraTrigger_b__0(::Class_2_0C58AD91B0F4D809* guestEntity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS47_0__CREATECAMERATRIGGER_B__0_OFFSET))(this, guestEntity);
	}

	::System::Void _CreateCameraTrigger_b__1(::Class_2_0C58AD91B0F4D809* guestEntity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS47_0__CREATECAMERATRIGGER_B__1_OFFSET))(this, guestEntity);
	}
};

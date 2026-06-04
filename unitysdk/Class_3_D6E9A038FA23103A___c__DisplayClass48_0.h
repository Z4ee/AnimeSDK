#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_09B45CBFDAC5DA07.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;

#define CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS48_0__CREATECAMERATRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0xA80F370)
#define CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS48_0__CREATECAMERATRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0xA80F3F0)
#define CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA801B70)

inline static constexpr unsigned int Class_3_D6E9A038FA23103A___c__DisplayClass48_0_TypeDefinitionIndex = 71262;

class Class_3_D6E9A038FA23103A___c__DisplayClass48_0 : public ::System::Object
{
public:
	::Struct_2_09B45CBFDAC5DA07 callback; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateCameraTrigger_b__0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS48_0__CREATECAMERATRIGGER_B__0_OFFSET))(this, a1);
	}

	::System::Void _CreateCameraTrigger_b__1(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS48_0__CREATECAMERATRIGGER_B__1_OFFSET))(this, a1);
	}
};

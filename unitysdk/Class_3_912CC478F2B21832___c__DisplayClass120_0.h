#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_09B45CBFDAC5DA07.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;

#define CLASS_3_912CC478F2B21832___C__DISPLAYCLASS120_0__CREATECAMERATRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x16B44740)
#define CLASS_3_912CC478F2B21832___C__DISPLAYCLASS120_0__CREATECAMERATRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x16B447C0)
#define CLASS_3_912CC478F2B21832___C__DISPLAYCLASS120_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16B30730)

inline static constexpr unsigned int Class_3_912CC478F2B21832___c__DisplayClass120_0_TypeDefinitionIndex = 76212;

class Class_3_912CC478F2B21832___c__DisplayClass120_0 : public ::System::Object
{
public:
	::Struct_2_09B45CBFDAC5DA07 callback; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832___C__DISPLAYCLASS120_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateCameraTrigger_b__0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832___C__DISPLAYCLASS120_0__CREATECAMERATRIGGER_B__0_OFFSET))(this, a1);
	}

	::System::Void _CreateCameraTrigger_b__1(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832___C__DISPLAYCLASS120_0__CREATECAMERATRIGGER_B__1_OFFSET))(this, a1);
	}
};

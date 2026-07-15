#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_09B45CBFDAC5DA07.h"
#include "unitysdk/System/Object.h"

class Class_2_56DCA1B58073717B;

#define CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS74_0__CREATECAMERATRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x1762C1B0)
#define CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS74_0__CREATECAMERATRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x1762C230)
#define CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1762C1A0)

inline static constexpr unsigned int Class_3_001D9EA49F6215B6___c__DisplayClass74_0_TypeDefinitionIndex = 72778;

class Class_3_001D9EA49F6215B6___c__DisplayClass74_0 : public ::System::Object
{
public:
	::Struct_2_09B45CBFDAC5DA07 callback; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateCameraTrigger_b__0(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS74_0__CREATECAMERATRIGGER_B__0_OFFSET))(this, a1);
	}

	::System::Void _CreateCameraTrigger_b__1(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS74_0__CREATECAMERATRIGGER_B__1_OFFSET))(this, a1);
	}
};

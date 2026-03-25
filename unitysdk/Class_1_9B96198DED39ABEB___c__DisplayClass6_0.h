#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21F7296E79A49D3E;
class Class_3_C6C803F6D2DDE4D8;

#define CLASS_1_9B96198DED39ABEB___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x114EEF00)
#define CLASS_1_9B96198DED39ABEB___C__DISPLAYCLASS6_0__REGISTEREVENT_B__0_OFFSET UNITYSDK_OFFSET(0x114EF650)

inline static constexpr unsigned int Class_1_9B96198DED39ABEB___c__DisplayClass6_0_TypeDefinitionIndex = 63495;

class Class_1_9B96198DED39ABEB___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_3_C6C803F6D2DDE4D8* handler; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B96198DED39ABEB___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RegisterEvent_b__0(::Class_1_21F7296E79A49D3E* w)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21F7296E79A49D3E*))((::PBYTE)hIl2Cpp + CLASS_1_9B96198DED39ABEB___C__DISPLAYCLASS6_0__REGISTEREVENT_B__0_OFFSET))(this, w);
	}
};

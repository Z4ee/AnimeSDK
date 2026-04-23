#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21F7296E79A49D3E;
class Class_3_C6C803F6D2DDE4D8;

#define CLASS_1_9B96198DED39ABEB___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98684B0)
#define CLASS_1_9B96198DED39ABEB___C__DISPLAYCLASS7_0__UNREGISTEREVENT_B__0_OFFSET UNITYSDK_OFFSET(0x9868A70)

inline static constexpr unsigned int Class_1_9B96198DED39ABEB___c__DisplayClass7_0_TypeDefinitionIndex = 71536;

class Class_1_9B96198DED39ABEB___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_3_C6C803F6D2DDE4D8* handler; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B96198DED39ABEB___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _UnregisterEvent_b__0(::Class_1_21F7296E79A49D3E* wrapper)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21F7296E79A49D3E*))((::PBYTE)hIl2Cpp + CLASS_1_9B96198DED39ABEB___C__DISPLAYCLASS7_0__UNREGISTEREVENT_B__0_OFFSET))(this, wrapper);
	}
};

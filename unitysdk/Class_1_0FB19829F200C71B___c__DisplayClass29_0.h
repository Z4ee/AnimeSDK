#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3CFD07DFD0180CDE;
class Class_1_5E2D533DC7C7E714;

#define CLASS_1_0FB19829F200C71B___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15840FC0)
#define CLASS_1_0FB19829F200C71B___C__DISPLAYCLASS29_0___ONCHIPPIECEMOVED_B__0_OFFSET UNITYSDK_OFFSET(0x15841DF0)

inline static constexpr unsigned int Class_1_0FB19829F200C71B___c__DisplayClass29_0_TypeDefinitionIndex = 79477;

class Class_1_0FB19829F200C71B___c__DisplayClass29_0 : public ::System::Object
{
public:
	::Class_1_5E2D533DC7C7E714* piece; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnChipPieceMoved_b__0(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B___C__DISPLAYCLASS29_0___ONCHIPPIECEMOVED_B__0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_37C86F8E7774C578;
class Class_1_E2972620852557B7_Class_3_9446BF3BADFA1788;

#define CLASS_1_E2972620852557B7___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB284BF0)
#define CLASS_1_E2972620852557B7___C__DISPLAYCLASS14_0___ONWAITINSTANTIATEPIECEREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0xB2850A0)

inline static constexpr unsigned int Class_1_E2972620852557B7___c__DisplayClass14_0_TypeDefinitionIndex = 79535;

class Class_1_E2972620852557B7___c__DisplayClass14_0 : public ::System::Object
{
public:
	::Class_1_E2972620852557B7_Class_3_9446BF3BADFA1788* message; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnWaitInstantiatePieceRequest_b__0(::Class_1_37C86F8E7774C578* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_37C86F8E7774C578*))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7___C__DISPLAYCLASS14_0___ONWAITINSTANTIATEPIECEREQUEST_B__0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3CFD07DFD0180CDE;
class Class_1_E2972620852557B7_Class_3_56684E0CF9B20AC3;

#define CLASS_1_E2972620852557B7___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB284F80)
#define CLASS_1_E2972620852557B7___C__DISPLAYCLASS16_0___ONWAITMOVEPIECEREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0xB285130)

inline static constexpr unsigned int Class_1_E2972620852557B7___c__DisplayClass16_0_TypeDefinitionIndex = 79536;

class Class_1_E2972620852557B7___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_1_E2972620852557B7_Class_3_56684E0CF9B20AC3* message; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnWaitMovePieceRequest_b__0(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7___C__DISPLAYCLASS16_0___ONWAITMOVEPIECEREQUEST_B__0_OFFSET))(this, a1);
	}
};

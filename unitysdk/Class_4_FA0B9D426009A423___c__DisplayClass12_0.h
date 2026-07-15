#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_63D18ECF87218619_1;
class Class_4_FA0B9D426009A423;

#define CLASS_4_FA0B9D426009A423___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DACD80)
#define CLASS_4_FA0B9D426009A423___C__DISPLAYCLASS12_0___FINISHRESET_B__0_OFFSET UNITYSDK_OFFSET(0x17DACE10)

inline static constexpr unsigned int Class_4_FA0B9D426009A423___c__DisplayClass12_0_TypeDefinitionIndex = 72858;

class Class_4_FA0B9D426009A423___c__DisplayClass12_0 : public ::System::Object
{
public:
	::Class_1_63D18ECF87218619_1* moveBlackBoard; // 0x10
	::Class_4_FA0B9D426009A423* __4__this; // 0x18
	::UnityEngine::Vector3 resetPosition; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FA0B9D426009A423___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Void __FinishReset_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FA0B9D426009A423___C__DISPLAYCLASS12_0___FINISHRESET_B__0_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2A97E60807F449E7;

#define CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS96_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1819EF50)
#define CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS96_0___FINDCHANGEDETAIL_B__0_OFFSET UNITYSDK_OFFSET(0x181A0480)

inline static constexpr unsigned int Class_2_9885B9F5AA089289___c__DisplayClass96_0_TypeDefinitionIndex = 68006;

class Class_2_9885B9F5AA089289___c__DisplayClass96_0 : public ::System::Object
{
public:
	::System::UInt32 nodeID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS96_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __FindChangeDetail_b__0(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS96_0___FINDCHANGEDETAIL_B__0_OFFSET))(this, a1);
	}
};

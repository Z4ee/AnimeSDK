#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6B60059019300BAD;
class Class_2_9013317B60F70CB5;

#define CLASS_2_9013317B60F70CB5___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16709070)
#define CLASS_2_9013317B60F70CB5___C__DISPLAYCLASS16_0___DOSPLIT_B__0_OFFSET UNITYSDK_OFFSET(0x16709960)

inline static constexpr unsigned int Class_2_9013317B60F70CB5___c__DisplayClass16_0_TypeDefinitionIndex = 73960;

class Class_2_9013317B60F70CB5___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_2_6B60059019300BAD* soldierEntity; // 0x10
	::Class_2_9013317B60F70CB5* __4__this; // 0x18
	::System::UInt32 effectUID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9013317B60F70CB5___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void __DoSplit_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9013317B60F70CB5___C__DISPLAYCLASS16_0___DOSPLIT_B__0_OFFSET))(this);
	}
};

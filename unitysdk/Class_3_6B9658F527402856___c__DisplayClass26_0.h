#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_6B9658F527402856___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10CC89A0)
#define CLASS_3_6B9658F527402856___C__DISPLAYCLASS26_0__ONROBOTCOMMUNICATEPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0x10CD4F10)

inline static constexpr unsigned int Class_3_6B9658F527402856___c__DisplayClass26_0_TypeDefinitionIndex = 48891;

class Class_3_6B9658F527402856___c__DisplayClass26_0 : public ::System::Object
{
public:
	::System::UInt32 communicateID; // 0x10
	::System::UInt32 playerUID; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B9658F527402856___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnRobotCommunicatePerformance_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B9658F527402856___C__DISPLAYCLASS26_0__ONROBOTCOMMUNICATEPERFORMANCE_B__0_OFFSET))(this);
	}
};

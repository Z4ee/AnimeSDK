#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_3BDFAF4A2AB65026___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAA25560)
#define CLASS_3_3BDFAF4A2AB65026___C__DISPLAYCLASS42_0__ONROBOTCOMMUNICATEPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0xAA37EE0)

inline static constexpr unsigned int Class_3_3BDFAF4A2AB65026___c__DisplayClass42_0_TypeDefinitionIndex = 55683;

class Class_3_3BDFAF4A2AB65026___c__DisplayClass42_0 : public ::System::Object
{
public:
	::System::UInt32 communicateID; // 0x10
	::System::UInt32 playerUID; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3BDFAF4A2AB65026___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnRobotCommunicatePerformance_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3BDFAF4A2AB65026___C__DISPLAYCLASS42_0__ONROBOTCOMMUNICATEPERFORMANCE_B__0_OFFSET))(this);
	}
};

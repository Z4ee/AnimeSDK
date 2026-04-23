#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7D0B754E2D8CECAF;
class Class_1_E2D539C29BA420F0;
class Class_3_626F93E2306641CC;

#define CLASS_1_E2D539C29BA420F0___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10B04D40)
#define CLASS_1_E2D539C29BA420F0___C__DISPLAYCLASS1_0__EXECUTEPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0x10B04D50)

inline static constexpr unsigned int Class_1_E2D539C29BA420F0___c__DisplayClass1_0_TypeDefinitionIndex = 71596;

class Class_1_E2D539C29BA420F0___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_3_626F93E2306641CC* services; // 0x10
	::Class_1_E2D539C29BA420F0* __4__this; // 0x18
	::Class_1_7D0B754E2D8CECAF* eventParam; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2D539C29BA420F0___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _ExecutePerformance_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2D539C29BA420F0___C__DISPLAYCLASS1_0__EXECUTEPERFORMANCE_B__0_OFFSET))(this);
	}
};

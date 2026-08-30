#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"

#define CLASS_2_C82BFD76B12E0E01_METHOD_2_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x1C4FA180)
#define CLASS_2_C82BFD76B12E0E01__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4FA360)
#define CLASS_2_C82BFD76B12E0E01__UPDATE_B__0_0_OFFSET UNITYSDK_OFFSET(0x1C4FA370)

inline static constexpr unsigned int Class_2_C82BFD76B12E0E01_TypeDefinitionIndex = 40921;

class Class_2_C82BFD76B12E0E01 : public ::Class_1_5BE136E515AF9A61
{
public:
	::System::Boolean PINOPBHJIMP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C82BFD76B12E0E01__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C82BFD76B12E0E01_METHOD_2_7998F8CA1E002410_OFFSET))(this, a1);
	}

	::System::Void _Update_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C82BFD76B12E0E01__UPDATE_B__0_0_OFFSET))(this);
	}
};

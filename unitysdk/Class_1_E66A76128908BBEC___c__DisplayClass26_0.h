#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_142;
class Class_1_E66A76128908BBEC;

#define CLASS_1_E66A76128908BBEC___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16930A40)
#define CLASS_1_E66A76128908BBEC___C__DISPLAYCLASS26_0__SETDRIVER_B__0_OFFSET UNITYSDK_OFFSET(0x16931E80)

inline static constexpr unsigned int Class_1_E66A76128908BBEC___c__DisplayClass26_0_TypeDefinitionIndex = 80382;

class Class_1_E66A76128908BBEC___c__DisplayClass26_0 : public ::System::Object
{
public:
	::Class_1_E66A76128908BBEC* __4__this; // 0x10
	::System::UInt32 driverID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E66A76128908BBEC___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetDriver_b__0(::Class_1_D17272E82AE804C2_142* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_142*))((::PBYTE)hIl2Cpp + CLASS_1_E66A76128908BBEC___C__DISPLAYCLASS26_0__SETDRIVER_B__0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_13969349E9FA1475;
class Class_2_21AD365C113DC484;

#define CLASS_1_13969349E9FA1475___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF4330)
#define CLASS_1_13969349E9FA1475___C__DISPLAYCLASS55_0__PREPARESPARKLEOCCUR_B__0_OFFSET UNITYSDK_OFFSET(0x1AAF4D20)

inline static constexpr unsigned int Class_1_13969349E9FA1475___c__DisplayClass55_0_TypeDefinitionIndex = 36622;

class Class_1_13969349E9FA1475___c__DisplayClass55_0 : public ::System::Object
{
public:
	::Class_2_21AD365C113DC484* sparkleEntity; // 0x10
	::Class_1_13969349E9FA1475* __4__this; // 0x18
	::System::UInt32 sparkleOccurZ; // 0x20
	::System::UInt32 transferFloatingUnits; // 0x24
	::System::UInt64 nextWaitEndTime; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13969349E9FA1475___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _PrepareSparkleOccur_b__0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13969349E9FA1475___C__DISPLAYCLASS55_0__PREPARESPARKLEOCCUR_B__0_OFFSET))(this);
	}
};

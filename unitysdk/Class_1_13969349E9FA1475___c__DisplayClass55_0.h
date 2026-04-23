#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_13969349E9FA1475;
class Class_2_3ABA989E5AECB261;

#define CLASS_1_13969349E9FA1475___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C544B0)
#define CLASS_1_13969349E9FA1475___C__DISPLAYCLASS55_0__PREPARESPARKLEOCCUR_B__0_OFFSET UNITYSDK_OFFSET(0x17C54E40)

inline static constexpr unsigned int Class_1_13969349E9FA1475___c__DisplayClass55_0_TypeDefinitionIndex = 34696;

class Class_1_13969349E9FA1475___c__DisplayClass55_0 : public ::System::Object
{
public:
	::Class_1_13969349E9FA1475* __4__this; // 0x10
	::Class_2_3ABA989E5AECB261* sparkleEntity; // 0x18
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ED2BA82F23447955;
class Class_2_3ABA989E5AECB261;

#define CLASS_1_ED2BA82F23447955___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x165D8100)
#define CLASS_1_ED2BA82F23447955___C__DISPLAYCLASS55_0__PREPARESPARKLEOCCUR_B__0_OFFSET UNITYSDK_OFFSET(0x165D8A80)

inline static constexpr unsigned int Class_1_ED2BA82F23447955___c__DisplayClass55_0_TypeDefinitionIndex = 28962;

class Class_1_ED2BA82F23447955___c__DisplayClass55_0 : public ::System::Object
{
public:
	::Class_2_3ABA989E5AECB261* sparkleEntity; // 0x10
	::Class_1_ED2BA82F23447955* __4__this; // 0x18
	::System::UInt64 nextWaitEndTime; // 0x20
	::System::UInt32 sparkleOccurZ; // 0x28
	::System::UInt32 transferFloatingUnits; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED2BA82F23447955___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _PrepareSparkleOccur_b__0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED2BA82F23447955___C__DISPLAYCLASS55_0__PREPARESPARKLEOCCUR_B__0_OFFSET))(this);
	}
};

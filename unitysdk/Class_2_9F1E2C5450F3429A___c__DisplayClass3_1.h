#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DCEE691286F89A;

#define CLASS_2_9F1E2C5450F3429A___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0xED63E00)
#define CLASS_2_9F1E2C5450F3429A___C__DISPLAYCLASS3_1__SYNCMOTIONINFO_B__2_OFFSET UNITYSDK_OFFSET(0xED63E10)

inline static constexpr unsigned int Class_2_9F1E2C5450F3429A___c__DisplayClass3_1_TypeDefinitionIndex = 66430;

class Class_2_9F1E2C5450F3429A___c__DisplayClass3_1 : public ::System::Object
{
public:
	::Class_1_52DCEE691286F89A* motionInfo; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F1E2C5450F3429A___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
	}

	::System::Boolean _SyncMotionInfo_b__2(::Class_1_52DCEE691286F89A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_52DCEE691286F89A*))((::PBYTE)hIl2Cpp + CLASS_2_9F1E2C5450F3429A___C__DISPLAYCLASS3_1__SYNCMOTIONINFO_B__2_OFFSET))(this, a1);
	}
};

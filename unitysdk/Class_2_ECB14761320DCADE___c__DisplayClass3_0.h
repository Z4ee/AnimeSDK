#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DCEE691286F89A;

#define CLASS_2_ECB14761320DCADE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16ADCC30)
#define CLASS_2_ECB14761320DCADE___C__DISPLAYCLASS3_0__SYNCMOTIONINFO_B__0_OFFSET UNITYSDK_OFFSET(0x16ADEB60)

inline static constexpr unsigned int Class_2_ECB14761320DCADE___c__DisplayClass3_0_TypeDefinitionIndex = 63444;

class Class_2_ECB14761320DCADE___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::UInt64 expireTime; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _SyncMotionInfo_b__0(::Class_1_52DCEE691286F89A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_52DCEE691286F89A*))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE___C__DISPLAYCLASS3_0__SYNCMOTIONINFO_B__0_OFFSET))(this, a1);
	}
};

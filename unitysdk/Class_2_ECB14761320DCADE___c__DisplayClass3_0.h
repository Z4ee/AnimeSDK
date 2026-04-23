#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DCEE691286F89A;

#define CLASS_2_ECB14761320DCADE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1000DB30)
#define CLASS_2_ECB14761320DCADE___C__DISPLAYCLASS3_0__SYNCMOTIONINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1000F9E0)

inline static constexpr unsigned int Class_2_ECB14761320DCADE___c__DisplayClass3_0_TypeDefinitionIndex = 61155;

class Class_2_ECB14761320DCADE___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::UInt64 expireTime; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _SyncMotionInfo_b__0(::Class_1_52DCEE691286F89A* m)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_52DCEE691286F89A*))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE___C__DISPLAYCLASS3_0__SYNCMOTIONINFO_B__0_OFFSET))(this, m);
	}
};

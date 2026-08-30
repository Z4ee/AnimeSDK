#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_576F4DC5F5A776FC;

#define CLASS_3_3F430F8318E7939F___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE2E7290)
#define CLASS_3_3F430F8318E7939F___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__1_OFFSET UNITYSDK_OFFSET(0xE2E76E0)
#define CLASS_3_3F430F8318E7939F___C__DISPLAYCLASS1_0__ONTASKBEGIN_G__ONSCENEENTERED_0_OFFSET UNITYSDK_OFFSET(0xE2E7590)

inline static constexpr unsigned int Class_3_3F430F8318E7939F___c__DisplayClass1_0_TypeDefinitionIndex = 58092;

class Class_3_3F430F8318E7939F___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_1_576F4DC5F5A776FC* activityService; // 0x10
	::System::UInt32 matchId; // 0x18
	::System::UInt32 trackId; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F430F8318E7939F___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_g__OnSceneEntered_0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3F430F8318E7939F___C__DISPLAYCLASS1_0__ONTASKBEGIN_G__ONSCENEENTERED_0_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F430F8318E7939F___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__1_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
namespace System { template <typename T> class Action_1; }

#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B949B0)
#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__REGISTERDYNAMICGROUPCHALLENGE_B__0_OFFSET UNITYSDK_OFFSET(0x15B949C0)
#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__REGISTERDYNAMICGROUPCHALLENGE_B__2_OFFSET UNITYSDK_OFFSET(0x15B94BB0)
#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__REGISTERDYNAMICGROUPCHALLENGE_G__REGISTERGROUP_1_OFFSET UNITYSDK_OFFSET(0x15B949D0)

inline static constexpr unsigned int BigSceneGroupChallengeUtil___c__DisplayClass1_0_TypeDefinitionIndex = 49908;

class BigSceneGroupChallengeUtil___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* ret; // 0x10
	::Struct_2_ABC67D4EFBF3BD9A_3 levelInfo; // 0x18
	::System::Boolean isDynamic; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _RegisterDynamicGroupChallenge_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__REGISTERDYNAMICGROUPCHALLENGE_B__0_OFFSET))(this);
	}

	::System::Void _RegisterDynamicGroupChallenge_g__registerGroup_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__REGISTERDYNAMICGROUPCHALLENGE_G__REGISTERGROUP_1_OFFSET))(this);
	}

	::System::Void _RegisterDynamicGroupChallenge_b__2(::Class_0_16E4307DCC419505_36* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS1_0__REGISTERDYNAMICGROUPCHALLENGE_B__2_OFFSET))(this, _);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A0EE873EACD64B72;
class Class_2_F8EB4D9464ADCCA1;

#define ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13348C50)
#define ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS15_0__GETGROUPMONSTERCONFIGS_B__0_OFFSET UNITYSDK_OFFSET(0x13348C60)

inline static constexpr unsigned int ActivityCommonUIUtil___c__DisplayClass15_0_TypeDefinitionIndex = 44148;

class ActivityCommonUIUtil___c__DisplayClass15_0 : public ::System::Object
{
public:
	::Class_1_A0EE873EACD64B72* member; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetGroupMonsterConfigs_b__0(::Class_2_F8EB4D9464ADCCA1* match)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_F8EB4D9464ADCCA1*))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS15_0__GETGROUPMONSTERCONFIGS_B__0_OFFSET))(this, match);
	}
};

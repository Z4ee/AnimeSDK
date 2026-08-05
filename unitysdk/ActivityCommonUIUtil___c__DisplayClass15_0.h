#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B6B0D4D95C980CCC;
class Class_2_F8EB4D9464ADCCA1;

#define ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12A81E30)
#define ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS15_0__GETGROUPMONSTERCONFIGS_B__0_OFFSET UNITYSDK_OFFSET(0x12A81E40)

inline static constexpr unsigned int ActivityCommonUIUtil___c__DisplayClass15_0_TypeDefinitionIndex = 86136;

class ActivityCommonUIUtil___c__DisplayClass15_0 : public ::System::Object
{
public:
	::Class_1_B6B0D4D95C980CCC* member; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetGroupMonsterConfigs_b__0(::Class_2_F8EB4D9464ADCCA1* match)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_F8EB4D9464ADCCA1*))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS15_0__GETGROUPMONSTERCONFIGS_B__0_OFFSET))(this, match);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_86997AC0C8EBD0CE;
namespace RPG::Client { class ActivityBenefitV2Round; }
namespace RPG::Client { class ScheduleData; }

#define CLASS_1_86997AC0C8EBD0CE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAFBBBE0)
#define CLASS_1_86997AC0C8EBD0CE___C__DISPLAYCLASS8_0___ONSCHEDULECONFIGREFRESHFINISH_B__0_OFFSET UNITYSDK_OFFSET(0xAFBC020)

inline static constexpr unsigned int Class_1_86997AC0C8EBD0CE___c__DisplayClass8_0_TypeDefinitionIndex = 57407;

class Class_1_86997AC0C8EBD0CE___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_1_86997AC0C8EBD0CE* __4__this; // 0x10
	::RPG::Client::ActivityBenefitV2Round* round; // 0x18
	::System::UInt32 activityModuleID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86997AC0C8EBD0CE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnScheduleConfigRefreshFinish_b__0(::RPG::Client::ScheduleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + CLASS_1_86997AC0C8EBD0CE___C__DISPLAYCLASS8_0___ONSCHEDULECONFIGREFRESHFINISH_B__0_OFFSET))(this, a1);
	}
};

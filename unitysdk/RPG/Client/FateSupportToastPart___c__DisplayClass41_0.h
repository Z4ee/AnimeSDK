#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class FateSupportToastPart; }
namespace RPG::Client { class ScheduleData; }

#define RPG_CLIENT_FATESUPPORTTOASTPART___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD03DD30)
#define RPG_CLIENT_FATESUPPORTTOASTPART___C__DISPLAYCLASS41_0___DETECTACTIVITYTIMELIMITSCHEDULE_B__0_OFFSET UNITYSDK_OFFSET(0xD03E570)

namespace RPG::Client
{
	inline static constexpr unsigned int FateSupportToastPart___c__DisplayClass41_0_TypeDefinitionIndex = 64227;

	class FateSupportToastPart___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateSupportToastPart* __4__this; // 0x10
		::RPG::Client::ActivityData* activityData; // 0x18
		::System::Boolean isImmediatelyOpened; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void __DetectActivityTimeLimitSchedule_b__0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART___C__DISPLAYCLASS41_0___DETECTACTIVITYTIMELIMITSCHEDULE_B__0_OFFSET))(this, a1);
		}
	};
}
